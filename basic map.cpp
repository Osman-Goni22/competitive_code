int findFrequency(vector<int> v, int x){
    map<int,int> mp;
    
    for(auto u: v)
    {
        mp[u]++;
    }
    
    return mp[x];
}
