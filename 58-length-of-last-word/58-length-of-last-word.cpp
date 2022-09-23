class Solution {
public:
    int lengthOfLastWord(string s) {
        int s_size = s.length();
        int count = 0;
        int temp =0;
        for(int i=0;i<s_size;i++)
        {
            if(s[i] == ' ')
                count = 0;
            else
            {
                count++;
                temp = count;
            }
        }
        return temp;
    }
};