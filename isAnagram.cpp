#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public: 
	//@brief: Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.
       	
    	bool isAnagram(string s, string t) {

        std::unordered_map<char, int> counterS, counterT;

	if (s.length() != t.length()){return false;}
        for (char letter : s) {
            counterS[letter]++;
        }

        for (char letter : t) {
            counterT[letter]++;
        }

        return counterS == counterT;

    }
};
