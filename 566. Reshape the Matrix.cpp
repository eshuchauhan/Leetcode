class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>&a, int r, int c) {
    
        if(r*c!=(a.size())*(a[0].size()))
        {
            return a;
        }
        else
        {
        vector<vector<int>>arr;
        vector<int>ans;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<(a[0].size());j++)
            {
                ans.push_back(a[i][j]);
                if(ans.size()==c)
                {
                    arr.push_back(ans);
                    ans.clear();
                }
            }
        }
        return arr;
        }
    }
};
