//https://codeforces.com/problemset/problem/1228/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    set<char> st;
    int l, r, ans=-1;
    cin>>l>>r;
    
    for(int i=l;i<=r;i++){
        s = to_string(i);
        for(int j=0;j<s.size();j++)
            st.insert(s[j]);
        
        if(s.size()==st.size()){
            ans = i;
            break;        
        }
    
        st.clear();
    }
    
    cout<<ans;
}
