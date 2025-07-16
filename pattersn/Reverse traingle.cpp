 #include<iostream>
 using namespace std;
 void fun(int n)
 {
     for(int i=0 ; i < n ; i++ )
     {
         // space 
         for(int j =0 ; j < i ; j++)
         {
             cout << " ";
         }
         for(int k =0 ; k < ( 2*n-(2*i+1)) ; k++)
         {
             cout <<"*";
         }
         for(int j =0 ; j<i  ; j++)
         {
             cout << " ";
         }
         cout << endl;
     }
 }
 int main()
 {
     int n = 5;
     fun(n);
 }
