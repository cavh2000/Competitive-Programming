//https://leetcode.com/problems/trapping-rain-water/
class Solution {
public:
    int trap(vector<int>& height) {
        int biggestL=height[0];
        int biggestR=height[height.size()-1];
        int pointerL=0;
        int pointerR=height.size()-1;
        int water=0;
        
        while(pointerL<pointerR){
            if(biggestL<biggestR){
                pointerL++;
                if(biggestL>height[pointerL])
                    water+=biggestL-height[pointerL];
                else
                    biggestL=height[pointerL];
            }else{
                pointerR--;
                if(biggestR>height[pointerR])
                    water+=biggestR-height[pointerR];
                else
                    biggestR=height[pointerR];
            }
        }
        
        return water;
    }
};
