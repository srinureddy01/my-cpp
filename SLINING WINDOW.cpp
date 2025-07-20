#include<iostream>
#include<unordered_set>
using namespace std;
void   findLongestPair(int nums[] , int n)
{
     unordered_set<int> seen;
     int left = 0 , right=0 , maxLength=0;
     while(right < n)
     {
         if(!seen.count(nums[right]))
         {
             seen.insert(nums[right]);
             maxLength = max(maxLength , right - left + 1);
             right++;
             
         }
         else
         {
             seen.erase(nums[left]);
             left++;
         }
     }
    cout << maxLength << endl;
}
int main()
{
    int ele[8] =  {1, 2, 3, 1, 2, 3, 2, 7};
    int n = sizeof(ele) / sizeof(ele[0]);
    findLongestPair(ele , n);
}
