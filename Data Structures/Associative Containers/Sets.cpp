#include <iostream>
#include <set>
#include <string>

// Define the custom structure
struct Player {
    int id;
    std::string name;
    int score;

    // The set uses the 'operator<' to determine both sorting and uniqueness.
    // If (A < B) is false AND (B < A) is false, the set considers them "equal"
    // and will treat them as a duplicate.
    bool operator<(const Player& other) const {
        // Primary sort: by score (descending - highest first)
        if (score != other.score) {
            return score > other.score; 
        }
        // Secondary sort: by ID (ascending) to ensure players with 
        // the same score aren't treated as duplicates.
        return id < other.id;
    }
};

int main() {
    // Initialize the set with Player objects
    std::set<Player> leaderboard;

    // 1. Adding elements
    leaderboard.insert({101, "Alice", 950});
    leaderboard.insert({102, "Bob", 820});
    leaderboard.insert({103, "Charlie", 950}); // Same score as Alice, but different ID
    leaderboard.insert({101, "Alice", 950});   // Exact duplicate - will be ignored

    // 2. Display the sorted, unique list
    std::cout << "--- Game Leaderboard ---" << std::endl;
    std::cout << "Rank\tID\tName\tScore" << std::endl;
    
    int rank = 1;
    for (const auto& p : leaderboard) {
        std::cout << rank++ << "\t" 
                  << p.id << "\t" 
                  << p.name << "\t" 
                  << p.score << std::endl;
    }

    // 3. Searching for a specific "identity"
    // Note: We only need to provide the fields used in the operator<
    Player searchCriteria = {102, "", 820}; 
    auto it = leaderboard.find(searchCriteria);

    if (it != leaderboard.end()) {
        std::cout << "\nFound Player: " << it->name << " with score " << it->score << std::endl;
    }

    return 0;
}
