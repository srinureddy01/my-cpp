#include<iostream>
using namespace std;

int first_tech(int arr[] ,  int size)
{   
    if(size<0)
    {
        return 0;
    }
    
    
    int max = arr[0] ; 
    for(int i =0 ; i < size ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
    
}

int main()
{
    int arr[] = {20,89,56};
    int  size= sizeof(arr) / sizeof(arr[0]);
    cout << first_tech(arr , size);
}
