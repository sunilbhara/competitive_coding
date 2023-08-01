//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void sol(int i, vector<int> &arr, vector<int> &ans, int n, int sum){
        if(i==n){
            ans.push_back(sum);
            sum = 0;
            return;
        }
        
        sol(i+1, arr, ans, n, sum+arr[i]);
        sol(i+1, arr, ans, n, sum);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        sol(0, arr, ans, N, 0);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends