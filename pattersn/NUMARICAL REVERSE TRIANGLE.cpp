#include<iostream>

using namespace std;
void fun(int n)
{
    for(int i =0 ; i < n ; i++)
    {
        for(int j = 1 ; j <= n - i ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n =5;
     
    
         
        fun(n);
    
    
}
