#include<iostream>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<list>

using namespace std;

int main()
{
    list<int>Mylist; // create the list which is double linked list
    Mylist = { 20 , 30}; // assigned the values
    for(int val : Mylist)
    {
        cout << val << " ";
    }
    
    //adding the ele in the frount
    cout << endl;
    Mylist.push_front(10);
    copy(Mylist.begin(), Mylist.end() , ostream_iterator<int>(cout," "));
    
    // adding ele in the back
    cout << endl;
    Mylist.push_back(40);
    copy(Mylist.begin(), Mylist.end() , ostream_iterator<int>(cout," "));
    
    
    // deleting the element at frount
    cout << endl;
    Mylist.pop_front();
    copy(Mylist.begin() , Mylist.end() , ostream_iterator<int>(cout," "));
    
    // deleting the ele at the back end
    cout << endl;
    Mylist.pop_back();
    copy(Mylist.begin() , Mylist.end() , ostream_iterator<int>(cout," ") );
    
    
    
    
    
    
}
