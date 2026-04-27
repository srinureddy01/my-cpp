#include <iostream>
#include <map>
#include <string>

int main() {
    std::multimap<int, std::string> scoreboard;
    int score;
    std::string name;

    std::cout << "Enter 3 pairs of (Score Name): " << std::endl;

    for(int i = 0; i < 3; i++) {
        std::cin >> score >> name;
        scoreboard.insert({score, name});
    }

    // Using an Iterator to loop
    std::cout << "\n--- Scoreboard (Sorted by Score) ---" << std::endl;
    std::multimap<int, std::string>::iterator it;
    
    for (it = scoreboard.begin(); it != scoreboard.end(); ++it) {
        // it->first is the key, it->second is the value
        std::cout << "Score: " << it->first << " | Player: " << it->second << std::endl;
    }

    return 0;
}
