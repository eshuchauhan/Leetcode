class Solution {
public:
    int maxCoins(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size(),sum=0;
        for(int i=0;i<n/3;i++)
        {
            sum=sum+a[n-2-2*i];
            cout<<a[n-2-2*i]<<" ";
        }
        return sum;
    }
};
