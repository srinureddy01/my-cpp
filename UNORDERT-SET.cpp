#include<iostream>
#include<unordered_set>

using namespace std;
void function(int nums[] , int n , int target)
{
    bool found = false;
    unordered_set <int> seen;
    for(int i=0 ; i< n ; i++)
    {
        int sum = target - nums[i];
        if(seen.count(sum))
        {
            cout << "yes";
            found = true;
            break;
        }
        seen.insert(nums[i]);
    }
    if(!found)
    {
        cout << false;
    }
}
int main()
{
    int nums[] = {3, 1, 4, 6, 5};
    int target = 9;
    int n = sizeof(nums)/sizeof(nums[0]);
    function(nums , n , target);
}
