#include <iostream>
#include <map>
#include <string>  

using namespace std;

int main() {
    map<string, int> myMap = {{"apple", 30}, {"ball", 60}, {"cat", 56}};

    // 1. Size of map
    cout << "Size: " << myMap.size() << endl; 

    // 2. Is it empty? (0 for No, 1 for Yes)
    cout << "Is empty: " << myMap.empty() << endl;

    // 3. Count (returns 1 if key exists, 0 if not)
    cout << "Count apple: " << myMap.count("apple") << endl;

    // 4. Find (Checks if it exists)
    // IMPORTANT: Use parentheses ( ) around the logic
    cout << "Exists: " << (myMap.find("apple") != myMap.end()) << endl;

    return 0;
}
