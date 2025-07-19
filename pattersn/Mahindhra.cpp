 #include<iostream>
 using namespace std;
 
 void fun(int n)
 {
      for(int i=1 ; i<=n ; i++)
      {
          //star
          for(int k=1 ; k <= i ; k++)
          {
              cout << "*";
          }
          //spaces
          for(int j =1 ; j<= 2*n - (2*i) ; j++)
          {
              cout << " ";
          }
          // star
           for(int k=1 ; k <= i ; k++)
          {
              cout << "*";
          }
          cout << endl;
      }
      // part -2
      for(int i=1 ; i<= n ; i++)
      {
          //stars
          for(int j =1 ; j <= n-i; j++)
          {
              cout <<"*";
          }
          //spaces
          for(int k=1; k <= 2*i ; k++)
          {
              cout << " ";
          }
            for(int j =1 ; j <= n-i; j++)
          {
              cout <<"*";
          }
          cout << endl;
      }
     
 }
 
 int main()
 {
     int n =5;
     fun(n);
 }
