#include<iostream>
using namespace std;

// 12345 -> 54321

int rev(int num , int ele)
{
    if(num > 0)
    {
        return rev(num / 10 , (ele * 10) + (num % 10));
    }
    else
    {
        return ele;
    }
}
int main()
{
    int num = 2;
    cout<< rev((12345),(0));
}
