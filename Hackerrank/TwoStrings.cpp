//https://www.hackerrank.com/challenges/two-strings/
string twoStrings(string s1, string s2) {
    set<char> st;
    if(s1.size() < s2.size()){
        for(auto s : s2)
            st.insert(s);
        
        for(auto s : s1){
            if(st.find(s) != st.end())
                return "YES";
        }
    }else{
        for(auto s : s1)
            st.insert(s);
            
        for(auto s : s2){
            if(st.find(s) != st.end())
                return "YES";
        }
            
    }
    
    return "NO";
}
