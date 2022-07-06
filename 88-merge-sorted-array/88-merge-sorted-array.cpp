class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // time complexity -> O((m+n)log(m+n))
        // int j=m;
        // for(int i=0;i<n;i++)
        // {
        //     nums1[j+i] = nums2[i];
        // }
        // sort(nums1.begin(),nums1.end());
        
        // time complexity -> O(m+n)
        int i = m+n-1;
        int p1 = m-1;
        int p2 = n-1;
        while(p2 >= 0)
        {
            if(p1 >= 0 && nums1[p1] > nums2[p2])
            {
                nums1[i--] = nums1[p1--];
            }
            else
            {
                nums1[i--] = nums2[p2--];
            }
        }
    }
};