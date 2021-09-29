class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
     int m=a.size(),n=a[0].size(),i;
     int top=0,left=0,right=n-1,bottom=m-1;
        vector<int>v;
        while(top<=bottom && left<=right)
        {
            for(i=left;i<=right;i++)
            {
                v.push_back(a[top][i]);
            }
            top++;
            
            
            for(i=top;i<=bottom;i++)
            {
                v.push_back(a[i][right]);
            }
            right--;
            
            
            if(top<=bottom)
            {
                for(i=right;i>=left;i--)
                {
                    v.push_back(a[bottom][i]);
                }
                bottom--;
            }
            if(left<=right)
            {
                for(i=bottom;i>=top;i--)
                {
                    v.push_back(a[i][left]);
                }
                left++;
            }
        }
        return v;
    }
};
