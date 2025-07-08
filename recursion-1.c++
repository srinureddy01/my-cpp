#include<iostream>
using namespace std;

int sum(int num)
{
    
   if(num>0)
   {
       return num + (sum(num-1));
   }
   else
   {
       return 0;
   }
}

int main()
{
    cout << "the sum of 0 to 10 range of number are "<<sum(10);
}
