#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string onlyAlpha;
        for(char c: s){
            if (isalnum(c)){
                c = tolower(c);
                onlyAlpha+=c;
            }
        }
        int sLength = onlyAlpha.size();
        for (int i = 0; i < (sLength / 2); i++){
            if (onlyAlpha[i] != onlyAlpha[sLength-1-i]){
                return false;
            }
        } 
        return true;
    }
};

