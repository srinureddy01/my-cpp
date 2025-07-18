#include<iostream>
using namespace std;

void fun(int n)
{
    for(int i=0 ; i< n ; i++)
    {
       for(char c = 'A' ; c < 'A' + n -i; c++)
       {
           cout << c;
       }
        cout << endl;
    }
}
int main()
{
    int n =5;
    fun(n);
}
