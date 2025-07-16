#include<iostream>

using namespace std;
void fun(int n)
{
    for(int i =0 ; i< n ; i++)
    {
        // space
        for(int j = 0 ; j < n - i -1; j++)
        {
            cout << " ";
        }
        
        
        
        // star
        for(int k = 0 ; k < ( 2*i+1) ; k++)
        {
            cout << "*";
        }
        
        // space 
       for(int j =0; j < n -i - 1 ; j++)
       {
           cout << " ";
       }
       cout << endl;
    }
    
}
int main()
{
    int n =5;
     
    
         
        fun(n);
    
    
}
