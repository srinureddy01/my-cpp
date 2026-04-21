#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
    vector<int> val(3);
    iota(val.begin() , val.end() , 21);
    
    
    //push_back()
    val.push_back(12);
    copy(val.begin() , val.end() , ostream_iterator<int>(cout, " "));
    cout << endl;
    
    //emplace_back
    val.emplace_back(120);
    copy(val.begin(),val.end(),ostream_iterator<int>(cout, " "));
    
}
