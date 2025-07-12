// using the two pointers 
#include<iostream>
#include<vector>
using namespace std;
void two_pointers(vector<int>& nums)
{
     int write_pointer = 0;
     for(int read_pointer=0 ; read_pointer< nums.size() ; read_pointer++)
     {
         if(nums[read_pointer] != 0)
         {
             nums[write_pointer] = nums[read_pointer];
             write_pointer++;
         }
     }
     
     for(int i = write_pointer ; i<nums.size() ; i++)
     {
         nums[i] = 0;
     }
}
using namespace std;
int main()
{
    vector <int> nums={0,1,2,4,0};
     two_pointers(nums);
    for(const auto& pair : nums)
    cout << pair;
}
