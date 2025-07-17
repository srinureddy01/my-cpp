// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int k=1;
void fun(int n)
{
    
 for(int i =1 ; i <= n ; i++)
 {
     // number
     for( k = 1 ; k <=i ; k++)
     {
         cout << k;
     }
     //spaces
     for(int j =0 ; j < (2*n-(i+i)) ; j++)
     {
         cout << " ";
     }
     
     k--;
        for(int m =0 ; k > 0 ; k--)
        {
            cout << k;
        }
        cout << endl;
 }
}
int main() {
    int n=4;
    fun(n);
}
