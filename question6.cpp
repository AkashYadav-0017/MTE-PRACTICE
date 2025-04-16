#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastIndex;
    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < s.length(); end++) {
        char currentChar = s[end];

        
        if (lastIndex.find(currentChar) != lastIndex.end()) {
            start = max(start, lastIndex[currentChar] + 1);
        }

        lastIndex[currentChar] = end;

        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);
    cout << "Length of longest substring without repeating characters: " << result << endl;
    return 0;
}
