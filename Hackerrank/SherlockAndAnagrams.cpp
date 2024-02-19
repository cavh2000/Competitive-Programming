https://www.hackerrank.com/challenges/sherlock-and-anagrams/
int sherlockAndAnagrams(string s) {
    map<string, int> mp;
    int ans =0;
    string sub;

    for(int i = 0; i < s.size(); i++){
        for(int j = 1; j <= s.size() - i; j++){
            sub = s.substr(i, j);
            sort(sub.begin(), sub.end());
            if(mp.find(sub) == mp.end())
                mp[sub]=1;
            else
                mp[sub]++;    
        }
    }
    
    for(auto it : mp){
        if(it.second > 1)
            ans += (it.second * (it.second - 1)/2);
    }
    
    return ans;
}
