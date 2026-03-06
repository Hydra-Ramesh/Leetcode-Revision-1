#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // sort array

        int n = nums.size();
        for (int i = 0; i < n; i += 2) { // check every pair
            if (i == n - 1 || nums[i] != nums[i + 1]) {
                return nums[i]; // the single number
            }
        }
        return -1; // just in case (should never happen)
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2,2,1};
    cout << sol.singleNumber(nums1) << endl; // 1

    vector<int> nums2 = {4,1,2,1,2};
    cout << sol.singleNumber(nums2) << endl; // 4

    vector<int> nums3 = {1};
    cout << sol.singleNumber(nums3) << endl; // 1
}