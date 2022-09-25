// https://leetcode.com/problems/find-the-town-judge/
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        /*A person has to be trusted by everyone and do not trust anyone to be a judge 
        A person who don't trust anyone but is also not trusted by all (i.e., trusted by n/2) its not a judge
        What I do is count people who trusts each person and people who this person trusts, if there's a judge 
        trustsSomeone must be 0 and isTrustedBySomeone must be n-1, otherwise theres no judge*/
        vector <int> trustsSomeone(n+1,0); 
        vector <int> isTrustedBySomeone(n+1,0);
        
        for(int i=0;i<trust.size();i++){
            trustsSomeone[trust[i][0]]++;
            isTrustedBySomeone[trust[i][1]]++;
        }
        
        for(int i=1;i<trustsSomeone.size();i++){
            if(isTrustedBySomeone[i]==n-1 && trustsSomeone[i]==0){
                return i;
            }
        }
        return -1;
    }
};
