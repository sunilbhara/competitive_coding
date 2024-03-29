// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007

 // } Driver Code Ends
class Solution{
    public:
    // long long power(int N,int R)
    // {
    //      //Your code here
    //     long long int x = 1000000007;
    //     if(N==0)
    //         return 1;
    //     int temp = power(N,R/2)%x;
    //     temp = ((temp%x)*(temp%x))%x;
    //     if(R%2==0)
    //         return temp%x;
    //     else
    //         return (temp*N)%x;
    // }

    
    long long power(int N,int R)
    {
        //Your code here
        long long int x = 1000000007;
        long long int res = 1;
       
        while(R>0)
        {
            if(R&1)
                res = (res*N%x)%x;
        
        N = (N%x*N%x)%x;
        R = R>>1;
        }
        return res;
    }

};

// { Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}  // } Driver Code Ends