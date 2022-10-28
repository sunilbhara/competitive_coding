class Solution {
public:
    int mySqrt(int x) {
        long long l=0, r=x, ans, mid;   
        while(l<=r)
        {             
            mid = (l+r)/2;
            
            if(mid*mid == x) 
                return mid;     
            else if(mid*mid < x)
            {             
                l = mid + 1;        
                ans=mid;        
            }
            else 
                r = mid - 1;       
        }
        return ans;   
    }
};