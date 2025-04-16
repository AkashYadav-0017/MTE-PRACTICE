#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void generatePermutations(string& str, int index) {
    if (index == str.length() - 1) {
        cout << str << endl;
        return;
    }

    for (int i = index; i < str.length(); i++) {
        swap(str[index], str[i]);              // Choose
        generatePermutations(str, index + 1);  // Explore
        swap(str[index], str[i]);              // Un-choose (Backtrack)
    }
}

int main() {
    string s = "abc";
    cout << "All permutations of \"" << s << "\":" << endl;
    generatePermutations(s, 0);
    return 0;
}
