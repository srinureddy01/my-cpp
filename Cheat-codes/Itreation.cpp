#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
   vector<int> abc ( 100 , 9 ); // so this line meance there are 100 memory blocks and saved the number 9
// if you want to know the how many ele in the vector we use  the .size()
// as well as if we want to iterate it we use the for loop thats fine what if we cont use the .size but we have to print it so we can use the 
copy(abc.begin() , abc.end(), ostream_iterator<int>(cout, " "));
    return 0;
}
