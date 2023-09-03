//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int biggest = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        int aux;
        
        for(int i = arr.size()-2;i >= 0;i--){
            aux = arr[i];
            arr[i] = biggest;
            biggest = (biggest < aux) ? aux : biggest;
        }
        
        return arr;
    }
};
