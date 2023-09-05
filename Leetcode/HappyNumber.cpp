//https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {
        int sum;
        set<int> repeat;
        while(n != 1){
            sum = 0;
            while(n != 0){
                sum += pow((n % 10), 2);
                n /= 10;
            }
            if(repeat.find(sum) == repeat.end())
                repeat.insert(sum);
            else
                return false;
            n = sum;
        }
        return true;
    }
};
