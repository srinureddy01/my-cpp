//sum of digits using recursion
#include<iostream>
using namespace std;
int sum(int num)
{
    if(num ==0 )
    {
        return 0;
    }
    else
    {
        return (num % 10 ) + ( sum(num / 10));
    }
}
 
int main()
{
    int num = 12345;
    // here we have to genarate the op as 10
    cout <<"the sum of "<<num<<":"<<sum(num);
}
