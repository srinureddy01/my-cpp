#include<iostream>//input , outpit stream
#include<algorithm>//used in the value.begin , value.end like its used for the sorting
#include<iterator>//used to load the itrator
#include<array>//arrays header
#include<numeric>//used to load the iota

using namespace std; 

int main()
{
   std::array<int,100> value; // array initilzation
    iota(value.begin() , value.end() , 2); // its under the numaric herders it usually do the add the ele from the array 
    
    copy(value.begin(), value.end(), ostream_iterator<int>(cout , " ")); // loop
}
