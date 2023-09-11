//https://leetcode.com/problems/unique-email-addresses/
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int i, j;
        string domain, local;
        set<string> s;
        for(auto email : emails){
            domain="";
            local="";
            i = 0;
            while(email[i]!='+' && email[i]!='@'){
                if(email[i]!='.')
                    local+=email[i];
                i++;
            }
            j=email.size()-1;
            while(email[j]!='@'){
                domain+=email[j];
                j--;
            }
            
            local+=domain;
            if(s.find(local)==s.end())
                s.insert(local);
        }
        
        return s.size();
    }
};
