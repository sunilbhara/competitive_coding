class Solution {
public:
    bool isPalindrome(long long int x) {
        int y = x;
        long long int temp1=0;
        while(x>0)
        {
            temp1 = temp1*10 + x%10;
            x /= 10;
        }
        
        // if(x<0)
        //     return false;
        if(temp1 == y)
            return true;
        else
            return false;
    }
};