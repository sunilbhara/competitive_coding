class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        // vector<int> ans;
        // if(k==nums.size())
        //     return nums;
        // for(int i=0;i<k;i++)
        // {
        //     ans.push_back(nums[i]);
        // }
        // for(int i=k;i<nums.size();i++)
        // {
        //     for(auto &it: ans)
        //     {
        //         if(it<nums[i])
        //         {
        //             swap(it,nums[i]);
        //             i--;
        //             break;
        //         }
        //     }
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        priority_queue<pair<int,int>> pq;
    for(int i=0;i<nums.size();i++)
        pq.push({nums[i],i});
    
    vector<int> index;
    while(k--){
        pair<int,int> t=pq.top();
        index.push_back(t.second);
        pq.pop();
    }
    sort(index.begin(),index.end());
    
    vector<int> ans;
    for(int i=0;i<index.size();i++)
        ans.push_back(nums[index[i]]);
    
    return ans;
    }
};