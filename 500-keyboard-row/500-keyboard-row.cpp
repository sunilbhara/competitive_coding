class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        string row1{"qwertyuiopQWERTYUIOP"};
        string row2{"asdfghjklASDFGHJKL"};
        string row3{"zxcvbnmZXCVBNM"};
        
        vector<string> res;
        unordered_map<char,int> mp;
        
        for(auto ch:row1)mp[ch]=1;
        for(auto ch:row2)mp[ch]=2;
        for(auto ch:row3)mp[ch]=3;
        
        for(auto& word:words)
        {
            int r=mp[word[0]];
            bool isconsist=true;
            for(auto& ch:word)
            {
                if(mp[ch]!=r)
                {
                    isconsist=false;
                    break;
                }
            }
            if(isconsist)
            {
                res.push_back(word);
            }
            
        }
        return res;
        
        
        
    }
};