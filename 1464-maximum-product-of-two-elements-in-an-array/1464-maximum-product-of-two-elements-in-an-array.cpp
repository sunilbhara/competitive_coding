class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = 0,second=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[first])
            {
                second = first;
                first = i;
            }
            else
            {
                if(second==-1 || nums[i]>nums[second])
                {
                    second = i;
                }
            }
        }
        int ans = (nums[first]-1)*(nums[second]-1);
        return ans;
    }
};