class Solution {
public:
    int minOperations(vector<vector<int>>&a, int x) {
        vector<int>v;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[0].size();j++)
            {
                v.push_back(a[i][j]);
            }
        }
        
        sort(v.begin(),v.end());
        int n=v.size();
        
        int mid=v[n/2],ans=0;
        for(int i=0;i<n;++i)
        {
            if(abs(v[i]-mid)%x==0)
            ans+=abs(v[i]-mid)/x;
            else return -1;
        }
        return ans;
    }
};
