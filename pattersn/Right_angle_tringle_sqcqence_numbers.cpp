#include<iostream>

using namespace std;
void fun(int n)
{
     for(int i=1; i<=n ; i++)
    {
        for(int j =1 ; j <= i ; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n =5;
     
    
         
        fun(n);
    
    
}
