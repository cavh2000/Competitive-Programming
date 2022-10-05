//https://leetcode.com/problems/integer-to-roman/
class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int,string>> rom;
        string ans="";
        rom.push_back(make_pair(1000,"M"));
        rom.push_back(make_pair(900,"CM"));
        rom.push_back(make_pair(500,"D"));
        rom.push_back(make_pair(400,"CD"));
        rom.push_back(make_pair(100,"C"));
        rom.push_back(make_pair(90,"XC"));
        rom.push_back(make_pair(50,"L"));
        rom.push_back(make_pair(40,"XL"));
        rom.push_back(make_pair(10,"X"));
        rom.push_back(make_pair(9,"IX"));
        rom.push_back(make_pair(5,"V"));
        rom.push_back(make_pair(4,"IV"));
        rom.push_back(make_pair(1,"I"));
        
        int i=0;
        while(num != 0){
            if(num - rom[i].first >= 0){
                ans += rom[i].second;
                num -= rom[i].first;
            }else
                i++;
        }
        
        return ans;
    }
};
