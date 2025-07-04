#include<iostream>
using namespace std;

int main()
{
    int ele[] = {3 , 5, 5, 6, 6, 7, 9};
    int len_array = sizeof(ele) / sizeof(ele[0]);
    
    for(int i =0 ; i< len_array ; i++)
    {
        cout << ele[i] << (i == len_array-1 ? " " : ",");
    }
    cout << endl;
}
