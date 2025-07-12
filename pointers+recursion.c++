#include<iostream>
using namespace std;
void  recusion(int *a , int *b , int swap = 0)
{
    if(swap==0)
    {
        int temp = *a;
         recusion(&temp , b , 1);
         *a = temp;
    }
    if(swap ==1)
    {
        int temp = *b;
        *b = *a ;
        *a = temp;
    }
}
int main()
{
    int a = 10 , b=20 ;
    recusion(&a , &b);
    cout << a << b ;
}
