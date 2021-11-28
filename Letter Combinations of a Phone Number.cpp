class Solution {
public:
    
    vector<string>mapping={"","", "abc", "def" , "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void helper(string digits, string ans , vector<string>&v)
    {
        if(digits.size()==0)
        {
            v.push_back(ans);
            return;
        }
        
        char ch=digits[0];
        
        string remaining=digits.substr(1);
        
        string word=mapping[ch-'0'];
        
        for(int i=0;i<word.size();i++)
        {
            helper(remaining, ans + word[i], v);
        }
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string>xx;
        if(digits.size()==0)
        {
            return xx;
        }
        helper(digits,"",xx);
        return xx;
        
    }
};
