#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<deque>

using namespace std;

int main()
{
    deque<int> dq;
    dq = { 1 ,2 };
    copy(dq.begin(), dq.end() , ostream_iterator<int>(cout , " "));
    
    // inserting from frount operation 
    dq.push_front(20);
    copy(dq.begin() , dq.end(), ostream_iterator<int>(cout , " "));
    cout << endl;
    // deleting form frount
    dq.pop_front();
    copy(dq.begin(), dq.end() , ostream_iterator<int>(cout, " "));
    
    //insert back 
    dq.push_back(99099);
    cout << endl;
    copy(dq.begin(), dq.end() , ostream_iterator<int>(cout, " "));
    
    
    //delete back 
    cout << endl;
    dq.pop_back();
    copy(dq.begin() , dq.end() , ostream_iterator<int>(cout, " "));
    
    
}
