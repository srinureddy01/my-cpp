#include<forward_list>
#include<iostream>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    forward_list<int> flist; // single pointer initilization
    flist={10,20};
    for(int val:flist)
    {
        cout<<val<<" ";
    }
    
    // adding the ele at the very begginig only
    cout << endl;
    flist.push_front(5);
    copy(flist.begin() , flist.end() , ostream_iterator<int>(cout," "));
    
    
    //removing the forst ele only
    cout << endl;
    flist.pop_front();
    copy(flist.begin() , flist.end() , ostream_iterator<int>(cout," "));
    
    // we can also removev specific ele as well
    flist.remove(20);
    cout << endl;
    copy(flist.begin() , flist.end() , ostream_iterator<int>(cout," "));
    
    // we can also delete the entire forward_list 
    flist.empty();
    copy(flist.begin(), flist.end() , ostream_iterator<int>(cout," "));
    
    
    
    
    
    
    
    
    
    
}




