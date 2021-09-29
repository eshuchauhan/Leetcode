class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int i,n=a.size();
        int x=k;
        if(a[0]>k)
        {
            return k;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<=x)
            {
                x++;
            }
            else
            {
                break;
            }
        }
        return x;
        
    }
};
