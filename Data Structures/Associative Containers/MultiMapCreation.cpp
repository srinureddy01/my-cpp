#include <iostream>
#include <map> // Multimap is defined in the map header
#include <string>

int main() {
    // Creation: <Key Type, Value Type>
    std::multimap<std::string, int> inventory;

    // Insertion Method A: using std::make_pair
    inventory.insert(std::make_pair("Apple", 5));
    inventory.insert(std::make_pair("Apple", 3)); // Duplicate key allowed!

    // Insertion Method B: using curly braces (C++11 and later)
    inventory.insert({"Banana", 10});
    inventory.insert({"Orange", 7});

    // Simple Output using a range-based loop
    std::cout << "Current Inventory:" << std::endl;
    for (const auto& item : inventory) {
        std::cout << item.first << ": " << item.second << std::endl;
    }

    return 0;
}
