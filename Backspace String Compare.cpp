class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="",ans2="";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' and s[i]<='z') ans1+=s[i];
            
            else if(ans1.size()!=0) ans1.pop_back();
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]>='a' and t[i]<='z') ans2=ans2+t[i];
            
            else if(ans2.size()!=0) ans2.pop_back();
        }
        if(ans1.compare(ans2)==0) return true;
        return false;
    }
};
