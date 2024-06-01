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
        for(int i=0; i<s.size(); i++) {
            char roman = s[i];
            int roman_num = roman_to_integer_map[roman];
            
            if (roman=='I') {
                if (s[i+1]=='V') {
                    roman_num = 4;
                    i++;
                } else if (s[i+1]=='X') {
                    roman_num = 9;
                    i++;
                }
            } else if (roman=='X') {
                if (s[i+1]=='L') {
                    roman_num = 40;
                    i++;
                } else if (s[i+1]=='C') {
                    roman_num = 90;
                    i++;
                }
            } else if (roman=='C') {
                if (s[i+1]=='D') {
                    roman_num = 400;
                    i++;
                } else if (s[i+1]=='M') {
                    roman_num = 900;
                    i++;
                }
            }
            answer += roman_num;
        }
        return answer;
    }
};