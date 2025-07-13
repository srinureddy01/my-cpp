#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int spair(vector <int> &nums)
{
    if(nums.empty())
    return 0;
   int write_index = 1;
   for(int read_index = 1 ; read_index < nums.size() ; read_index++)
   {
       if(nums[read_index] != nums[write_index-1])
       {
           nums[write_index] = nums[read_index];
           write_index++;
       }
   }
 return write_index;
    
}
int main()
{
    vector <int> nums = {0,0,0,1,1,2,3,4,5,5};
    int original_length = nums.size();
    int res = spair(nums);
    cout << res;
}
