#include<iostream>
#include<unordered_set>

using namespace std;
void function(int nums[] , int n , int target)
{
    bool found = false;
    unordered_set <int> seen;
    for(int i=0 ; i< n ; i++)
    {
        if(seen.count(nums[i]))
        {
            cout << "Duplicate found: " << nums[i];
            found = true;
            break;
        }
        seen.insert(nums[i]);
    }
    if(!found)
    {
        cout << "Not found";
    }
}
int main()
{
    int nums[] = {1, 2, 3, 4, 5,5};
    int target = 9;
    int n = sizeof(nums)/sizeof(nums[0]);
    function(nums , n , target);
}
