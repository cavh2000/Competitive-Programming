//https://leetcode.com/problems/smallest-value-of-the-rearranged-number/
class Solution {
public:
    long long smallestNumber(long long num) {
        long long int ans=0;
        string number = to_string(num);
        
        if(num<0){
            sort(number.begin(), number.end(), greater<int>());
            number.pop_back();
            ans = stoll(number);
            ans = ans * -1;
        }else{
            sort(number.begin(), number.end());
            if(number[0]=='0'){
                for(int i=1;i<number.size();i++){
                    if(number[i]!='0'){
                        swap(number[0],number[i]);
                        break;
                    }
                }
            }
            ans = stoll(number);
        }
            
            
        return ans;
    }
};
