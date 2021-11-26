class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int i,j,n=a.size(),m=a[0].size(),maxi=0;
        for(i=0;i<n;i++)
        {
            int sum=0;
            for(j=0;j<m;j++)
            {
                sum=sum+a[i][j];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
