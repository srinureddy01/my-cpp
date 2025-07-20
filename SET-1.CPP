#include <unordered_set>
#include<set>
#include <iostream>
using namespace std;
int main() {
    cout <<"----------set-----------------------" << endl;
    set<int>nums={7, 3, 9, 3, 1};
 for(int n : nums)
 {
     cout << n << endl;
 }
    if(nums.count(3))
    {
        cout << 3 << "  was present";
    }
    else
    {
        cout << 3 << " not present";
    }
    cout << endl;
        if(nums.count(10))
    {
        cout << 10 << "was present";
    }
    else
    {
        cout << 10 << "not present";
    }
    cout <<endl<<"----------unorderen_set--------------";
    cout << endl;
    unordered_set<int> nums1={7, 3, 9, 3, 1};
  for(int n : nums1)
  {
      cout << n << endl;
  }
   if(nums1.count(3))
    {
        cout << 3 << "  was present";
    }
    else
    {
        cout << 3 << " not present";
    }
    cout << endl;
        if(nums1.count(10))
    {
        cout << 10 << "was present";
    }
    else
    {
        cout << 10 << "not present";
    }
    
}
