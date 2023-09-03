//https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
        int lastDigit, ans = 0;
        
        while(x){
            lastDigit = x % 10;
            if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && lastDigit > 7))
                return 0;
            if(ans < INT_MIN / 10 || (ans == INT_MIN / 10 && lastDigit > 8))
                return 0;
            
            x /= 10;
            ans = (ans * 10) + lastDigit;
        }
        
        return ans;
    }
};
