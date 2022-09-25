class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector <string> ans;
        int size_l1 = list1.size();
        int size_l2 = list2.size();
        int sum = -1;
        
        
        for(int i=0;i<size_l1;i++)
        {
            for(int j=0;j<size_l2;j++)
            {
                if(list1[i]==list2[j])
                {
                    if(sum==-1)
                    {
                        sum = i+j;
                        ans.push_back(list1[i]);
                    }
                    else if(sum>(i+j))
                    {
                        sum = i+j;
                        ans.clear();
                        ans.push_back(list1[i]);
                    }
                    else if(sum==(i+j))
                    {
                        ans.push_back(list1[i]);
                    }
                }
            }
        }
        
        return ans;
    }
};