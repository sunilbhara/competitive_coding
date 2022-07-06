class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0,len = nums.size();
        int j = len-1;
        for(i=0;i<len;i++)
        {
            
            
                
            if(nums[i]==val)
            {
                nums[i] = nums[j--];
                i--;
                len--;
            }
                
        }
        
        return len;
    }
};