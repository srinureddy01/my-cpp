#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> mySet = { 1 , 2, 4, 5, 6};
    
    for(int x : mySet)
    {
        cout << x << " ";
    }
    return 0;
}
