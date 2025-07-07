// reverse of array using the python 
#include<iostream>
using namespace std;
int main()
{
    int nums[]={1,2,3,4,5};
    int len = sizeof(nums) / sizeof(nums[0]);
    int* cal = nums; // here the varible wsa nums[0]
    //*(nums + 1)
    int temp = 0 , index = len -1;
   for(int i=0 ; i < len/2 ; i++)
   {
       temp = *(nums + i); // we have the 1
       *(cal + i) = *(nums + index);
       *(cal + index) = temp;
       index--;
       
   }
   for(const auto& pair:nums)
   {
       cout << pair<<endl;
   }
}
