  #include<iostream>
 using namespace std;
 void fun(int n)
 {
      for(int i =0 ; i< n ; i++)
      {
          for(int j=0; j <= i ; j++)
          {
              cout << "*";
          }
          for(int k=0 ; k < ( n-1) ; k++)
          {
              cout << " ";
          }
          cout << endl;
      }
      for(int i =1 ; i<= n-1 ; i++)
      {
          //star
          for(int j = 0 ; j < n-i ; j++)
          {
              cout <<"*";
          }
          // start
          for(int k = 0 ; k < i ; k++)
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
