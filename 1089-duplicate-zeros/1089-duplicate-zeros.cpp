class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeroes = 0;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                zeroes++;
            }
        }
        int i = n -1;
        int j = n + zeroes -1;
        while(i != j)
        {
            insert(arr,i,j--,n);
            if(arr[i] == 0)
            {
                insert(arr,i,j--,n);
            }
            i--;
        }
    }
    
    void insert(vector<int>& arr,int i,int j,int n)
    {
        if(j < n)
        {
            arr[j] = arr[i];
        }
    }
};