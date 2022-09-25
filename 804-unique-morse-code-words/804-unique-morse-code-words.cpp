class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> d = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",                                  "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",                                "..-", "...-", ".--", "-..-", "-.--", "--.."};
        unordered_set<string> s;
        
        for (auto w : words) {
            string st;
            for (auto c : w) st += d[c - 'a'];
            s.insert(st);
        }
        return s.size();
    }
};