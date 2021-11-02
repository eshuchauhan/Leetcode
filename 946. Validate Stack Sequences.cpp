class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0;
        stack<int>s;
        for(auto x:pushed)
        {
            s.push(x);
            while(s.size()>0 && s.top()==popped[i])
            {
                s.pop();
                i++;
            }
        }
        if(s.size()==0)return true;
        return false;
    }
};
