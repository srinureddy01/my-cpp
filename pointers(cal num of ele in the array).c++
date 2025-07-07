#include<iostream>
using namespace std;

int main()
{
    int nums[]={ 1,2,10,4,6,8};
    int len = sizeof(nums)/sizeof(nums[0]);
    int even = 0 , odd = 0;
    int* cal = nums;
    
    for(int i=0 ; i< len ; i++)
    {
        if( *(nums + i) % 2 == 0 )
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "the total odd numbers are: "<<odd<<endl<<"the total even numbers are: "<<even;
}
