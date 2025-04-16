#include <iostream>
#include <vector>
using namespace std;

pair<int, int> twoSumSortedArray(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {arr[left], arr[right]};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {-1, -1}; 
}

int main() {
    vector<int> arr = {1, 2, 4, 6, 10};
    int target = 8;

    pair<int, int> result = twoSumSortedArray(arr, target);
    if (result.first != -1)
        cout << "Pair found: " << result.first << " + " << result.second << " = " << target << endl;
    else
        cout << "No pair found." << endl;

    return 0;
}
