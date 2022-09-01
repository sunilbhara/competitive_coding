class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        /*  
            first method: brute force approch tc O(n^2) sc O(1)
            int len = nums.size();
            int maxLen = len/2;
            for(auto it: nums)
            {
               int count =0;
                for(auto ele: nums)
                {
                    if(it==ele)
                    {
                        count++;
                    }
                }
                if(count>maxLen)
                    return it;
            }
            return -1;
        */
        
        /*
            Second method: Hash Map tc O(n) sc O(n) 
        */
        
        /*
            Third method: Sorting tc O(nlogn) sc O(1)
        */
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};