//https://leetcode.com/problems/reverse-bits/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int i = 31;
        while(i--){
            ans = ans | (n & 1);
            ans = ans << 1;
            n = n >> 1;
        }
        if(n)
            ans = ans | (n & 1);
        return ans;
    }
};
