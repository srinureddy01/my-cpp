#include <iostream>
using namespace std;

int main()
{
    // here the list was given sp that if any repeated ele the return true else retuen false
    int elements[] = {2, 1, 3, 4, 1};
    // elements = [1,2,3,4,5]
   int  input_length = sizeof(elements) / sizeof(elements[0]);
   cout << input_length<< endl;
   int flag = 0;
    for(int i = 0 ; i< input_length ; i++)
    {
        
        for(int j = i ; j < input_length ; j++)
        {
            if(i != j && elements[i] == elements[j])
            {
                flag = 1;
                break;
                
            }
        }
        if(flag == 1)
        {
            cout << "true" << endl;
            break;
        }
      
    }
    if(flag == 0 )
    {
        cout << "false" << endl;
    }
}
