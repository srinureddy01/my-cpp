#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int fun(vector <int> nums , int target)
{
    if(nums.empty())
    {
        return 0;
    }
    sort(nums.begin() , nums.end() ) ;
    
int left_ptr = 0;
int right_ptr = nums.size() - 1;

while (left_ptr < right_ptr)
{
    int sum = ( nums[left_ptr] + nums[right_ptr]);
    if(sum == target )
    {
        cout <<"["<< left_ptr +1 <<"," << right_ptr+1<<"]";
        return 1;
    }
    else if(sum < target )
    {
        left_ptr++;
    }
    else
    {
        right_ptr --;
    }
    
}
    
    return 0;
}

int main()
{
    vector <int> nums = {1, 2, 3, 4, 4, 9, 56, 90};
    int target = 8;
    
    fun(nums , target);
}
