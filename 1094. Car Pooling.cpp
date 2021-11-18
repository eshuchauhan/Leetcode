class Solution {
public:
    bool carPooling(vector<vector<int>>& a, int capacity) {
        
        int i,n=a.size();
        vector<pair<int,int>>v;
        for(i=0;i<n;i++)
        {
            v.push_back({a[i][1],a[i][0]});
            v.push_back({a[i][2],-a[i][0]});
        }
        sort(v.begin(),v.end());
        
        int max_cap=0;
        
        for(i=0;i<v.size();i++)
        {
            max_cap+=v[i].second;
            if(max_cap>capacity)
            {
                return false;
            }
        }
        return true;
        
    }
};
