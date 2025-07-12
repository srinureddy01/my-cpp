#include<iostream>
#include<vector>

using namespace std;
void two_pointer(vector <int>& nums)
{
    int write_pointer = 0;
    for(int read_pointer = 0 ; read_pointer < nums.size() ; read_pointer++)
    {
        if(nums[read_pointer] != 0)
        {
            if(read_pointer != write_pointer)
            {
                swap(nums[read_pointer] , nums[write_pointer]);
            }
             write_pointer++;
        }
        
        
    }
}
int main()
{
    vector <int> nums = { 0,0,0,9,8,0,0};
    two_pointer(nums);
    for(const auto& pair:nums)
    {
        cout << pair ;
    }
}
