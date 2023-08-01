//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        int cnt = 0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp[end[i]] != 0){
                mp[end[i]] = max(mp[end[i]], start[i]);
            }
            else
                mp[end[i]] = start[i];
        }
        
        int srt = -1;
        int ed = -1;
        for(auto it: mp){
            if(it.second > ed){
                cnt++;
                srt = it.second;
                ed = it.first;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends