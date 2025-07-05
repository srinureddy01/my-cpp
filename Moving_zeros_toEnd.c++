#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector <int> elements = {0,0,1};
     vector<int> append_vector;
    int vector_size = elements.size();
    int count=0;
    for(int index = 0 ;  index < vector_size ; index++)
    {
        if(elements[index] != 0)
        {
             append_vector.push_back(elements[index]);
            
           
        }
        else 
        {
              count = count + 1;
        }
    }
    
    for(int i=1 ; i<= count ; i++)
    {
        append_vector.push_back(0);
    }
    
    for(int ele : append_vector)
    {
        cout << ele <<" ";
    }
}
