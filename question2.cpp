#include <iostream>
#include <vector>
using namespace std;

int rangeSum(vector<int>& arr, int L, int R) {
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    if (L == 0)
        return prefix[R];
    else
        return prefix[R] - prefix[L - 1];
}

int main() {
    vector<int> arr = {2, 4, 5, 7, 8};
    int L = 1, R = 3;

    cout << "Sum from index " << L << " to " << R << " is: "
         << rangeSum(arr, L, R) << endl;

    return 0;
}
