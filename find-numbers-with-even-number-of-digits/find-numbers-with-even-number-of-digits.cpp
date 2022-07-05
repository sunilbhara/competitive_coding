class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int countEven=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            int count = 0;
            while(temp>0)
            {
                temp /= 10;
                count++;
            }
            if(count%2==0)
            {
                countEven++;
            }
        }
        return countEven;
    }
};