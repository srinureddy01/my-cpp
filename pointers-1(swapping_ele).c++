 
#include<iostream>

using namespace std;
int main()
{
    int a = 5 , b = 10 ;
    int *a1 = &b , *b1 = &a , temp = *b1;
    a = *a1 ; b = temp;
    cout <<"a :"<< a << endl <<"b: "<<b << endl ;
     
}
