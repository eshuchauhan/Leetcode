class Solution {
public:
    int islandPerimeter(vector<vector<int>>& a) {
        int i,j,n=a.size(),m=a[0].size(),sum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    sum=sum+4;
                    
                    if(i>0 && a[i-1][j]==1) 
                        sum=sum-2;
                    if(j>0 && a[i][j-1]==1)
                        sum=sum-2;
                }
            }
        }
        return sum;
    }
};
