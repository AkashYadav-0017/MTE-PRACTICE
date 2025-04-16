#include <iostream>
using namespace std;

int countNumbersWithUniqueDigits(int n) {
    if (n == 0) return 1;
    int count = 10, uniqueDigits = 9, available = 9;
    for (int i = 2; i <= n && available > 0; i++) {
        uniqueDigits *= available;
        count += uniqueDigits;
        available--;
    }
    return count;
}

int main() {
    int n = 2;
    cout << "Count of numbers with unique digits: " << countNumbersWithUniqueDigits(n) << endl;
    return 0;
}
