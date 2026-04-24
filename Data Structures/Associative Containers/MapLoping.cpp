#include <iostream>
#include <map>
#include <string> // Good practice to include this when using string keys

using namespace std;

int main() {
    std::map<string, int> myMap = {{"apple", 30}, {"ball", 60}, {"cat", 56}};

    // Loop through all key-value pairs
for (auto& pair : myMap) {
    std::cout << pair.first << " → " << pair.second << "\n";
}

// Output (sorted alphabetically by key):
// apple → 3
// banana → 7
// cherry → 1

    return 0;
}
