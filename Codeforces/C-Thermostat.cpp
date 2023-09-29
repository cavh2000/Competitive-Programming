#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, l, r, a, b, x;
    cin>>t;
    while(t--){
        cin>>l>>r>>x;
        cin>>a>>b;
        if(b<a)
            swap(a,b);
        if(a==b)
            cout<<"0";
        else if(b-a>=x)
            cout<<"1";
        else if(r-b>=x || a-l>=x)
            cout<<"2";
        else if(r-a>=x && b-l>=x)
            cout<<"3";
        else
            cout<<"-1";
        cout<<"\n";
    }
}
