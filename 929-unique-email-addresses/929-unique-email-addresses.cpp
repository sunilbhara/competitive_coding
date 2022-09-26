class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s1;
        for(auto &email: emails)
        {
            string str;
            for(auto c: email)
            {
                if(c=='+' || c=='@') break;
                if(c=='.') continue;
                
                str += c;
            }
            str += email.substr(email.find('@'));
            s1.insert(str);
        }
        return s1.size();
    }
};