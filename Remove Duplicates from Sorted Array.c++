#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> nums = { 0,0,1,1,4} ;
    int k=0;
    
    if(nums.empty())
    {
        cout<<"k = 0";
        return 0;
    }
    
    int i = 0;
    for(int j=1 ; j < nums.size() ; j++)
    {
        if(nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    
    k = i+1;
    cout<<k;
}
