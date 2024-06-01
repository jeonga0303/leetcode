class Solution {
public:
    int romanToInt(string s) {
        // 문자열의 값을 선언해야한다.
            // key:value 형식으로 선언하는게 빠르다.
        unordered_map <char, int> roman_to_integer_map = {
            {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}
        };

        // s를 하나씩 끊어서 loop를 돌리면서, 문자열 파악해서 value를 더해주면 됨
        int answer = 0;
        // 만약 현재 숫자가 다음 숫자보다 작으면 현재 숫자를 빼주고, 크면 더함
        // 예를 들어, IV면 1<5니까 1을 뺌(VI면 5<1이니까 5+1을 더함)
        // XC면 10<50이니까 10을 뺌(CX면 50<10이니까 50+10을 더함)
        for(int i=0; i<s.size(); i++) {
            if (roman_to_integer_map[s[i]]<roman_to_integer_map[s[i+1]]){
                answer = answer - roman_to_integer_map[s[i]];
            } else {
                answer = answer + roman_to_integer_map[s[i]];
            }
        }
        return answer;
    }
};