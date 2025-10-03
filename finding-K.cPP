// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int array1[] = {2,3,4,1,3,2};
    bool found=false;
    int k = 1;
    int size = sizeof(array1) / sizeof(array1[0]);
    
     for(int i =0 ; i < size ; i ++)
     {
         for(int j = 0 ; j < size  ; j++)
         {
             if( i != j && array1[i]-array1[j] == k )
             {   
                  found= true;
                  break;
             }
             
         }
          if(found)
             {
                 cout << "true";
                 
                 break;
             }
             
     }
}
