#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<vector>

using namespace std;

int main()
{
    vector<int> val(7);
    iota(val.begin(), val.end() ,7);
    
    cout << "The original vector:";
    copy(val.begin() , val.end() , ostream_iterator<int>(cout, " "));
    
    //using the push_back()
    cout << endl;
    val.push_back(1);
    cout << "pusing the ele 1 at the end: ";
    copy(val.begin(), val.end(),ostream_iterator<int>(cout," "));
    
    //pop_back removes the last ele in the vector
    cout << endl;
    cout << "this is the pop operation and ";
    val.pop_back();
    cout << endl;
    copy(val.begin() , val.end() , ostream_iterator<int>(cout, " "));
    
    //emplace add the ele at the back 
    cout << endl;
    cout << "emplac add the ele at the back" ;
    val.emplace_back(123);
    copy(val.begin() , val.end() , ostream_iterator<int>(cout, " "));
    
    //insert at the delet index 1 
    cout << endl;
    cout << "insert add the ele at the any index : " ;
    val.insert(val.begin()+1 , 99);
    copy(val.begin(), val.end() , ostream_iterator<int>(cout, " "));
    
    //erase at the index 1 delet the ele
    cout << endl;
    cout << "erase opeation remove the ele based on index val";
    val.erase(val.begin()+1);
    copy(val.begin() , val.end() , ostream_iterator<int>(cout, " "));
    
  // clear the entire vector
    cout << endl;
    cout << "Empt the vector operation here : ";
    val.clear();
    copy(val.begin(), val.end() , ostream_iterator<int>(cout , " "));
    
    
    
}



