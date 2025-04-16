#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPowerOfTwo(int n) {
            if (n < 1) {
                return 0;
            }
            while (n != 1) {
                if (n % 2 == 1) {
                    return 0;
                }
                n = n / 2;
            }
            return 1;
        }
};

int main() {
    Solution sol;
    int num;
    cout<<"Enter the num: ";
    cin>>num;
    if (sol.isPowerOfTwo(num)) {
        cout << num << " is a power of two" << endl;
    } else {
        cout << num << " is not a power of two" << endl;
    }
    return 0;
}
