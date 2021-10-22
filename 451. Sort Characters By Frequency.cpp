class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>v(123);
        string ans;
        for(int i=0;i<s.size();i++)
        {
            v[s[i]]={v[s[i]].first+1,s[i]};
        }
        sort(v.begin(),v.end());
        for(auto i:v)
        {
            ans=string(i.first,i.second)+ans;
        }
        return ans;
    }
};
