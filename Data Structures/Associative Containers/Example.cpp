#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // 1. Creation & Initialization (Unique keys, automatically sorted)
    map<string, int> inventory = {
        {"apple", 3}, 
        {"cherry", 1}, 
        {"banana", 7}
    };

    // 2. Adding / Updating
    inventory["date"] = 10;           // Adds new key-value
    inventory["apple"] = 5;           // Updates existing key "apple" to 5
    inventory.insert({"grape", 8});   // Inserts only if "grape" doesn't exist

    // 3. Checking Existence & Size
    cout << "Total items: " << inventory.size() << endl;
    if (inventory.count("banana")) {
        cout << "Banana is in stock!" << endl;
    }

    // 4. Safe Access vs []
    try {
        cout << "Cherry count: " << inventory.at("cherry") << endl;
        // inventory.at("pear"); // This would throw an error
    } catch (const out_of_range& e) {
        cout << "Key not found!" << endl;
    }

    // 5. Printing with Iterator (The loop you requested)
    cout << "\n--- Current Inventory (Sorted) ---" << endl;
    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        // it->first is the Key, it->second is the Value
        cout << "Item: " << it->first << " | Quantity: " << it->second << endl;
    }

    // 6. Finding and Erasing
    auto it = inventory.find("banana");
    if (it != inventory.end()) {
        inventory.erase(it); // Removes banana
        cout << "\nBanana removed." << endl;
    }

    return 0;
}
