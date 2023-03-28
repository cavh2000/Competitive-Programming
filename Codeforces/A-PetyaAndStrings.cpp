//https://codeforces.com/problemset/problem/112/A 
#include <iostream>

using namespace std;

int main(){
    int ans=0;
    string s, s2;
    cin>>s;
    cin>>s2;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        s2[i]=tolower(s2[i]);
        if(s[i]<s2[i]){
            ans=-1;
            break;
        }else if(s[i]>s2[i]){
            ans=1;
            break;
        }
    }
    
    cout<<ans;

    return 0;
}
