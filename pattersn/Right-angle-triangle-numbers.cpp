#include<iostream>

using namespace std;
void fun(int n)
{
     for(int i=0 ; i< n ; i++)
    {
        for(int j =0 ; j <= i ; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n =5;
     
    
         
        fun(n);
    
    
}
