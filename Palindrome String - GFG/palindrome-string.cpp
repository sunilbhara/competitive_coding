// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	/*
    	int isPal(string S,int len,int i)
    	{
    	    if(i>=len) return 1;
    	    if(S[i]!=S[len-1-i])  return 0;
    	    return isPal(S,len,i+1);
    	}
    */
	
	int isPalindrome(string S)
	{
	    // Iterative approach
        int len = S.size();
        for(int i=0;i<len/2;i++)
        {
            if(S[i]!=S[len-i-1])
                return 0;
        }
        return 1;
        
        /*
        // Recursive approach
        int len = S.size();
        return isPal(S,len,0);
        */
       
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends