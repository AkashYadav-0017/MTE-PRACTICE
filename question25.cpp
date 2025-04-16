#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            result[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }

    return result;
}

int main() {
    vector<int> nums = {4, 5, 2, 25};
    vector<int> res = nextGreaterElements(nums);
    cout << "Next Greater Elements: ";
    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
