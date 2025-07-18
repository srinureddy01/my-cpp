#include<iostream>
using namespace std;

void fun(int n)
{
    for(int i=0 ; i< n ; i++)
{
    // space
    for(int j =0 ; j<n-i-1 ; j++)
    {
        cout << " ";
    }
    // char
    char c = 'A';
    int break_point = (2*i+1)/2;
    for(int k =1 ; k <=(2*i+1) ; k++)
    {
        cout << c;
        if(k<=break_point) c++;
        else c--;
    }
    for(int j =0 ; j<n-i-1 ; j++)
    {
        cout << " ";
    }
        cout << endl;
}
}
int main()
{
    int n =4;
    fun(n);
}
