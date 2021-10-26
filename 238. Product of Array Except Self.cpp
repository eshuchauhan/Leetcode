class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int i,n=a.size();
        vector<int>v;
        int x=1;
        for(i=0;i<n;i++)
        {
            x=x*a[i];
            v.push_back(x);
        }
        x=1;
        for(i=n-1;i>0;i--)
        {
            v[i]=v[i-1]*x;
            x=x*a[i];
        }
        v[0]=x;
        return v;
    }
};
