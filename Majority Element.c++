#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    std::map<int, int> counts;
    int nums[] = {1, 2, 3, 4};  // Change this to test different arrays
    int size_array = sizeof(nums) / sizeof(nums[0]);

    // Count frequency of each number
    for (int i = 0; i < size_array; i++) {
        counts[nums[i]]++;
    }

    int majority_key = -1;
    int max_count = 0;

    // Find the element with the highest frequency
    for (const auto& pair : counts) {
        if (pair.second > max_count) {
            majority_key = pair.first;
            max_count = pair.second;
        }
    }

    float half_size = size_array / 2.0;

    // Check if it’s actually a majority element
    if (max_count > half_size) {
        cout << "op: " << majority_key << endl;
    } else {
        cout << "No majority element" << endl;
    }

    return 0;
}

