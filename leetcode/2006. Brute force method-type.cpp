class Solution {
public:
    int countKDifference(vector<int>& nums, int k) 
    {
        if(nums.empty())
        {
            return 0;
        }
        int match=0;
        int left =0;
        int right = nums.size();
        sort(nums.begin() , nums.end());
         for(int i=0 ; i< nums.size() ; i++)
         {
           for(int j=0 ; j< nums.size() ; j++)
           {
            int diff = nums[i]-nums[j];
            if(diff == k  )
            {
                match++;
            }
           }
            
         }
         return match;
    }
};
