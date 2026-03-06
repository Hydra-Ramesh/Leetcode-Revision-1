#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // sort the array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) return i;  // first mismatch
        }
        return nums.size();  // if all matched
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, 0, 1};
    cout << "Missing number: " << sol.missingNumber(nums1) << endl; // 2

    vector<int> nums2 = {0, 1};
    cout << "Missing number: " << sol.missingNumber(nums2) << endl; // 2

    vector<int> nums3 = {9,6,4,2,3,5,7,0,1};
    cout << "Missing number: " << sol.missingNumber(nums3) << endl; // 8

    vector<int> nums4 = {0};
    cout << "Missing number: " << sol.missingNumber(nums4) << endl; // 1

    return 0;
}