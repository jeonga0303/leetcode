class Solution {
public:
    bool isPalindrome(int x) {
        // 회문 번호(팰린드롬)
        // Follow up: string으로 바꾸지 않고 integer로 풀어야함
        bool result = false;
        int flag = 0;
        vector<int> x_list;

        if (x>=0) // 음수는 자동으로 처리됨
        {
            while(x!=0) // 숫자를 하나씩 차례로 x_list에 넣는다.
            {
                int temp = x%10; // 나머지 연산자
                x_list.push_back(temp);
                x /= 10; // 나누기 
            }

            for(int i=0;i<(x_list.size()/2);i++) // 2개씩 비교하니까 나누기 2를 해야함
            {
                if(x_list[i] != x_list[x_list.size()-i-1]) // i번째랑 맨뒤에서 i번째 수와 비교
                {
                    flag = 1;
                    break;
                }
            }
            
            if(flag==0)
            {
                result = true; 
            }
        }

        return result;
        
    }
};