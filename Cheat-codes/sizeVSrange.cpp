#include<iostream>
#include<numeric>
#include<algorithm>
#include<array>

using namespace std;

int main()
{
    array<int , 45> value;
    iota(value.begin(), value.end(), 1);
    
    int count=0;
    
    // i want to how many ele in the array using the .size()
    for(int i =0 ; i<value.size() ; i++)
    {
        count++;
    }
    cout << "the total numbers are :" << count;
    
    // range based loop to find the how many ele in the array
    
    count=0;
    for(int n :value)
    {
        count++;
    }
    cout << "the total number in the array was :" << count;
    
}
