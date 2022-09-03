class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        /*
        // Solution 1: using sorting tc- O(nlogn)
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n-k];
        */
        // Solution 2: using priority queue 
        priority_queue<int> pq;
        for(auto it: nums)
            pq.push(it);
        while(--k)
            pq.pop();
        return (pq.top());
    }
};