#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // Create an unordered map to store sorted strings as keys and their anagrams as values
    unordered_map<string, vector<string>> anagramGroups;
    
    // Iterate through each string in the input vector
    for (const string& s : strs) {
        // Create a sorted copy of the string to use as key
        string sortedStr = s;
        sort(sortedStr.begin(), sortedStr.end());
        
        // Add the string to its anagram group in the map
        anagramGroups[sortedStr].push_back(s);
    }
    
    // Convert the map values to the result vector
    vector<vector<string>> result;
    for (const auto& pair : anagramGroups) {
        result.push_back(pair.second);
    }
    
    return result;
}

