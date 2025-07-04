#include <iostream>

using namespace std;

int main()
{
    // input as a string then we hace to serch for ele of index
  //  int elements[] = { 1 , 2, 3, 4, }
    int elements[]={};
    bool target_found = false;
    cout << "enter the how many ele: ";
    int n;
    cin >> n;
    for(int i=0 ; i< n ; i++)
    {
        cout << "enter" << i +1 << " element :";
        cin >> elements[i];
    }
    cout<< "enter the sum element :";
    int target;
    cin >> target;
   int  total_ele = sizeof(elements) / sizeof(elements[0]);
    for(int i=0 ; i< total_ele ; i++)
    {
        
       
        for(int j= 1 ; j < total_ele - 1; j++)
        {
             
           if(elements[i] + elements[j] == target )
           {
               target_found = true;
               cout << "[" << i << "," << j << "]";
               break;
           }
        }
        
    }
    if(target_found)
    {
       
    }
    else
    {
        cout << "no ele was matched"<<endl;
    }
    for(int ele : elements)
    {
        cout << ele << endl;
    }
}
