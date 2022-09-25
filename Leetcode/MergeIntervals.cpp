// https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector <vector<int>> ans;
        int start=intervals[0][0];
        int end=intervals[0][1];
        
        for(int i=1;i<intervals.size();i++){
            cout<<end<<">="<<intervals[i][0]<<" "<<end<<"<="<<intervals[i][1]<<endl;
            
            if(end>=intervals[i][0]){//If the start of the ith element is lower than my current end
                if(end<=intervals[i][1]){//If the end of the ith element is bigger than my current end
                    end=intervals[i][1];//Get new end
                }
            }else{
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        ans.push_back({start,end});
        
        return ans;
    }
};
