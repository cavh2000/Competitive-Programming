//https://www.hackerrank.com/challenges/ctci-ransom-note/
void checkMagazine(vector<string> magazine, vector<string> note) {
    map<string,int> mp;
    for(auto s : magazine){
        if(mp.find(s) != mp.end())
            mp[s]++;
        else
            mp[s] = 1;
    }
    
    int ban = 1;
    for(auto n : note){
        if(mp.find(n) == mp.end())
            ban = 0;
        else if(mp[n] <= 0)
            ban = 0;
        else
            mp[n]--;  
    }
    
    if(ban)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}
