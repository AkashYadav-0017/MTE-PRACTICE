#include <iostream>
#include <vector>
using namespace std;

int findEquilibriumIndex(vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += arr[i];
    }

    return -1;  
}

int main() {
    vector<int> arr = {1, 3, 5, 2, 2};
    int index = findEquilibriumIndex(arr);

    if (index != -1)
        cout << "Equilibrium index is: " << index << endl;
    else
        cout << "No equilibrium index found." << endl;

    return 0;
}
