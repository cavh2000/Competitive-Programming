//https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanToInt(string s) {
        map<string, int> values;
        values.insert(pair<string,int>("I",1));
        values.insert(pair<string,int>("IV",4));
        values.insert(pair<string,int>("V",5));
        values.insert(pair<string,int>("IX",9));
        values.insert(pair<string,int>("X",10));
        values.insert(pair<string,int>("XL",40));
        values.insert(pair<string,int>("L",50));
        values.insert(pair<string,int>("XC",90));
        values.insert(pair<string,int>("C",100));
        values.insert(pair<string,int>("CD",400));
        values.insert(pair<string,int>("D",500));
        values.insert(pair<string,int>("CM",900));
        values.insert(pair<string,int>("M",1000));
        
        int num=0;
       
        for(int i=0;i<s.size();i++){
            string sub="";
            
            if(i<s.size()-1){
                sub+=s[i];
                sub+=s[i+1];
                auto it = values.find(sub);
                
                if(it != values.end()){
                    num += it->second; 
                    i++;
                }else{
                    sub.pop_back();
                    it = values.find(sub);
                    num += it->second;
                }
                
            }else{
                sub+=s[i];
                auto it = values.find(sub);
                
                if(it != values.end()){
                    num += it->second; 
                }
            }
        }
        
        return num;
    }
};
