 #include<iostream>
 using namespace std;
 
 void fun(int n)
 {
     for(int i=0 ; i < n ; i++)
     {
         // stars 
         for(int j=0 ; j< ( n-i) ; j++)
         {
             cout << "*";
         }
         // spaces
         for(int k=0 ; k < (2*i) ; k++)
         {
             cout << " ";
         }
         // stars
           for(int j=0 ; j< ( n-i) ; j++)
         {
             cout << "*";
         }
         cout << endl;
     }
     // secound part
     for(int i=1 ; i<= n ; i++)
     {
         for(int j=1 ; j <=i ; j++)
         {
             cout << "*";
         }
         // spaces are the main part here
         for(int k=0 ; k < 2*n - (2*i) ; k++)
         {
             cout << " ";
         }
         for(int j=1 ; j <=i ; j++)
         {
             cout << "*";
         }
         cout << endl;
     }
     
 }
 
 int main()
 {
     int n =5;
     fun(n);
 }
