//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    /*
	    // Solution 1: Using brtue forse
	    int n = txt.size();
	    int k = pat.size();
	    int cnt = 0;
	    multiset<char> st;
	    for(auto it: pat){
	        st.insert(it);
	    }
	    
	    for(int i=0;i<=n-k;i++){
	        multiset<char> tempst;
	        for(int j=i; j<i+k; j++){
	            tempst.insert(txt[j]);
	        }
	        if(st == tempst){
	            cnt++;
	        }
	    }
	    return cnt;
	    */
	    
	    // Solution 2: Using sliding window
	    int n = txt.length(); // length of txt
        int k = pat.length(); // window size
       
        // variable to store count of the occurences of anagrams of word in the text
        int ans = 0; 
            
        // storing frequency of characters in string : pat
        vector<int>hashPat(26,0);
        for(int i = 0;i<k;i++){
            hashPat[pat[i]-'a']++;
        }
            
        // storing frequency of characters in string : txt
        vector<int>hashTxt(26,0);
            
        int i = 0 , j = 0; // start of window and end of window
            
        while(j<n){
                
            hashTxt[txt[j]-'a']++;
                
            if(j-i+1 == k) // condition for attaining window size of 'k'
            {
                if(hashTxt == hashPat) // freq. of characters matches
                    ans++;
                    
                hashTxt[txt[i] - 'a']--; // to maintain the size of window
                i++;
            }
            j++;
        }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends