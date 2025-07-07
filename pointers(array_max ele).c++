//Input: 
//arr = {3, 7, 2, 9, 5}

//Output:
//Maximum element is: 9
#include<iostream>

using namespace std;

int main()
{
    int nums[10] = { 1,2,3,4,5,5,6,10};
    int* max_ele = nums; // nums = &nums[0]
    
    for(int i=1 ; i< 8 ; i++)
    {
        if(*max_ele < *(nums + i))
        {
            max_ele = nums + i ;
        }
    }
    cout << *max_ele;
}
