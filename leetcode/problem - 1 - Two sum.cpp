//https://chatgpt.com/share/6874f9f8-86f0-8012-9630-fbac0dbe196c

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // Step 1: Store each number with its original index
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }

        // Step 2: Sort the vector by the number values (not indices)
        sort(indexedNums.begin(), indexedNums.end());

        // Step 3: Initialize two pointers
        int left = 0;
        int right = nums.size() - 1;

        // Step 4: Search for the pair that sums to the target
        while (left < right) {
            int sum = indexedNums[left].first + indexedNums[right].first;

            if (sum == target) {
                // Found the pair, return their original indices
                return {indexedNums[left].second, indexedNums[right].second};
            } 
            else if (sum < target) {
                // Move left pointer to increase the sum
                left++;
            } 
            else {
                // Move right pointer to decrease the sum
                right--;
            }
        }

        // Step 5: If no valid pair is found, return [-1, -1]
        return {-1, -1};
    }
};
