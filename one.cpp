vector<vector<string>> Anagrams(vector<string> &a)
{
    map<string,vector<string>> m;
    for(int i=0;i<a.size();i++)
    {
    string s = a[i];
    sort(s.begin(),s.end());
    m[s].push_back(a[i]);
    }
    vector<vector<string>> res;
    for(auto x: m)
    {
        vector<string> v;
        for(auto y: x.second)
        {
            v.push_back(y);
        }
        
        res.push_back(v);
    }
    return res;
}