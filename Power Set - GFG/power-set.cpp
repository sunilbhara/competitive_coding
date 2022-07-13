// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	    
	    
	void printSubSeq(string &s,string &cur,vector<string> &ans,int i=0)
    {
        if(i==s.length())
        {
            ans.push_back(cur);
            return;
        }
    
        cur.push_back(s[i]);
        printSubSeq(s,cur,ans,i+1);
        cur.pop_back();
        printSubSeq(s,cur,ans,i+1);
    }
	    
	vector<string> AllPossibleStrings(string s){
		// Code here
		string cur ="";
		vector<string> ans;
		printSubSeq(s,cur,ans);
		sort(ans.begin(),ans.end());
		ans.erase(ans.begin()+0);
		return ans;
		    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends