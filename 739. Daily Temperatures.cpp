class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        int i,n=a.size();
        vector<int>ans(n);
        stack<pair<int,int>>s;
        for(i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                ans[i]=0;
            }
            else if(s.size()>0 && s.top().first>a[i])
            {
                ans[i]=1;
            }
            else if(s.size()>0 && s.top().first<=a[i])
            {
                while(s.size()>0 && s.top().first<=a[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    ans[i]=0;
                }
                else
                {
                    ans[i]=s.top().second-i;
                }
            }
            s.push(make_pair(a[i],i));
        }
        return ans;
    }
};
