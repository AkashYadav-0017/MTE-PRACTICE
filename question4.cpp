#include <iostream>
#include <vector>
using namespace std;

bool canSplitEqualSum(vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 0; i < arr.size() - 1; i++) { 
        leftSum += arr[i];
        int rightSum = totalSum - leftSum;

        if (leftSum == rightSum) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 3};
    if (canSplitEqualSum(arr))
        cout << "Array can be split into two equal-sum parts." << endl;
    else
        cout << "Array cannot be split into two equal-sum parts." << endl;

    return 0;
}
