// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int k=1;
void fun(int n)
{
    int start =1;
for(int i=1 ; i<=n ; i++)
{
    for(int j=1 ; j<= i; j++)
    {
        cout << start<< " ";
        start++;
        
    }
    cout << endl;
}
}
int main() {
    int n=5;
    fun(n);
}
