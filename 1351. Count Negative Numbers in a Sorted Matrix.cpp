class Solution {
public:
    int countNegatives(vector<vector<int>>& a) {
        int i,j,m=a.size(),n=a[0].size();
        i=0,j=n-1;
        int count=0;
        while((i>=0 && i<m) && (j>=0 && j<n))
        {
            if(a[i][j]<0)
            {
                count=count+(m-i);
                j--;
            }
            else
            {
                i++;
            }
        }
        return count;
    }
};
