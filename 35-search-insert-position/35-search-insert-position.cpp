class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int l = 0, r = nums.size()-1;
        // int mid = (l+r)/2;
        // while(l<r)
        // {
        //     if(target==nums[mid])
        //         return mid;
        //     else if(target<nums[mid])
        //     {
        //         r = mid;
        //         mid = (l+r)/2;
        //     }
        //     else if(target>nums[mid])
        //     {
        //         l = mid;
        //         mid = (l+r)/2;
        //     }
        // }
        if(!nums.size())
        return 0;
        int l = 0;
        int r = nums.size() - 1;
        int mid = -1;

        while(l <= r)
        {
            mid = l + ((r-l)>>1);

            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }

        return l;

    }
};