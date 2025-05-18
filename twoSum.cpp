#include <vector>
#include <unordered_map>
/* Given an array of integers nums and an integer target,
* return the indices i and j such that nums[i] + nums[j] == target and i != j.
* Return the answer with the smaller index first.
*/

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> ans_map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (ans_map.find(complement) != ans_map.end()) {
                return {ans_map[complement], i};
            }
            ans_map[nums[i]] = i;
        }
        return {}; // Return empty vector if no solution is found in the vector
    }
};
