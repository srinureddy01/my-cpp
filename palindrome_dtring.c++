#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string text ="amanaplanacanalpanama";
 
    string cal , rev ;
    for(char charr : text)
    {
        if(isalnum(charr))
        {
            
              cal += tolower(charr);
        }
    }
  
    
    for(int i = cal.size()-1 ; i >= 0 ; i--)
    {
        rev = rev + cal[i];
    }
     
     
    
    if(rev == cal)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
