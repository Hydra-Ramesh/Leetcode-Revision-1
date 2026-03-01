#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Swap adjacent elements
        for (int i = 0; i < nums.size(); i += 2) {
            swap(nums[i], nums[i + 1]);
        }

        return nums;
    }
};

int main() {
    // Example input
    vector<int> nums = {5, 4, 2, 3};

    Solution sol;
    vector<int> result = sol.numberGame(nums);

    cout << "Resulting array: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}