#include <iostream>
#include <map>
#include <string>

int main() {
    std::multimap<std::string, std::string> tasks;
    tasks.insert({"Monday", "Cleaning"});
    tasks.insert({"Monday", "Grocery Shopping"});
    tasks.insert({"Tuesday", "Gym"});
    tasks.insert({"Wednesday", "Coding"});

    // 1. Counting occurrences of a key
    std::string day = "Monday";
    std::cout << day << " has " << tasks.count(day) << " tasks." << std::endl;

    // 2. Finding and Erasing
    // Find returns an iterator to the FIRST instance found
    auto findIt = tasks.find("Tuesday");
    if (findIt != tasks.end()) {
        std::cout << "Found Tuesday task, deleting it..." << std::endl;
        tasks.erase(findIt); 
    }

    // 3. Deleting ALL instances of a key
    tasks.erase("Monday"); 
    std::cout << "After deleting Monday, total tasks left: " << tasks.size() << std::endl;

    return 0;
}
