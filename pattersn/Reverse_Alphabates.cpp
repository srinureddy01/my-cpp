#include<iostream>
using namespace std;

void fun(int n)
{
    for(int i =0 ; i< n ; i++)
    {
        char c = 'E'  ;
        c= c - i;
        for(int j=0 ; j <= i; j++)
        {
            cout << c ;
            c++;
        }
        cout << endl;
    }
}
int main()
{
    int n =5;
    fun(n);
}
