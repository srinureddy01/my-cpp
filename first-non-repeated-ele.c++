// here we have to fimd the ele in the string whew it was first repeted
#include <iostream>

using namespace std;
int main()
{
        string txt = "aabsebesu";
    // here we have to find the ele where it was first non repeating ele only
    int red_flag = 0 ;
   int  length_input = txt.length();
    for(int i =0 ; i < length_input ; i++)
    {
        int flag = 0;
        for(int j =0 ; j < length_input ; j++)
        {
           if (i != j && txt[i] == txt[j])
           {
               flag = 1;
               break;
           }
            
        }
    if(flag == 0)
    {
        cout << i << endl;
        red_flag = 1;
        break;
    }
    }
    if(red_flag ==0 )
    {
        cout << -1 << endl;
    }
}
