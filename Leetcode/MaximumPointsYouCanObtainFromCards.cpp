//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left = k;
        int right = cardPoints.size()-1;

        int maxSum, sum=0;
        
        for(int i=0;i<k;i++){
            sum += cardPoints[i];
        }
        
        maxSum = sum;
        
        while(left > 0){
            left--; right--;
            sum -= cardPoints[left];
            sum += cardPoints[right + 1];
            if(maxSum<sum)
                maxSum=sum;
        }
        
        return maxSum;
    }
};
