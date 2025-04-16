#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarrayK(vector<int>& arr, int k) {
    int n = arr.size();
    if (k > n) return -1;

    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int result = maxSumSubarrayK(arr, k);
    cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;

    return 0;
}
