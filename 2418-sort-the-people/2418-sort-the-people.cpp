class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string>m1;
        vector<string> ans;
        
        for(int i=0; i < size(names); i++)
            m1[heights[i]] = names[i];
        
        for (auto i = m1.rbegin(); i != m1.rend(); ++i) 
            ans.push_back(i->second);
        return ans;
    }
};