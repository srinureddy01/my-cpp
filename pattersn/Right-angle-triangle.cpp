#include<iostream>

using namespace std;
void fun(int n)
{
     for(int i=0 ; i< n ; i++)
    {
        for(int j =0 ; j <= i ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n ;
    cin >> n;
    for(int i = 0 ; i< n ; i++)
    {
         
        fun(n);
    }
    
}
