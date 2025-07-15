#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using namespace std;
int fun(string haystack , string needle)
{
    if(needle.empty())
    {
        return 0;
    }
    if(haystack.length() < needle.length())
    {
        return -1;
    }
 
    for(int i =0 ; i< haystack.length() ; i++)
    
    {
          bool error= false;
        if(haystack[i] == needle[0])
        {
            int j = 0 ;  
            while(j < needle.length())
            {
                if(haystack[i+j] != needle[j])
                {
                   error = true;
                   break;
                }
                  j++;
                
            }
            if(!error)
            {
                return i;
            }
             
        }
       
    }
    return -1;
}
int main()
{
    string  haystack = "programming is fun", needle = "fun";
    int res = fun(haystack , needle);
    cout << res;
}
