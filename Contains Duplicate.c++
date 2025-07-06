//content dublicate 
#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set <int> seen;
    int nums[] = {1, 2,1} ;
    int size = sizeof(nums) / sizeof(nums[0]);
  
    bool is_found = false;
    
       
    for(int j=0 ; j<size ; j++)
    {
         
       if(seen.count(nums[j]))
       {
           is_found = true;
           break;
       }
       seen.insert(nums[j]);
       
 
    }
    if(is_found)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
     
}
