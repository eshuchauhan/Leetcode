class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int x) {
        int m=a.size(),n=a[0].size();
        int i=0,j=n-1;
        while(i<m && j>=0)
        {
            if(a[i][j]==x)
            {
                return true;
            }
            else if(a[i][j]>x)
            {
                j--;
            }
            else if(a[i][j]<x)
            {
                i++;
            }
        }
        return false;
    }
};
