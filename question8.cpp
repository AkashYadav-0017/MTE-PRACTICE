#include <iostream>
#include <string>
using namespace std;

string expandFromCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.empty()) return "";

    string longest = "";

    for (int i = 0; i < s.length(); i++) {
        string odd = expandFromCenter(s, i, i);
        string even = expandFromCenter(s, i, i + 1);

        if (odd.length() > longest.length()) longest = odd;
        if (even.length() > longest.length()) longest = even;
    }

    return longest;
}

int main() {
    string s = "babad";
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}
