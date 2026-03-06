#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // sort array

        int n = nums.size();
        for (int i = 0; i < n; i += 3) { // check every 3 elements
            if (i + 2 >= n || nums[i] != nums[i + 1] || nums[i] != nums[i + 2]) {
                return nums[i]; // the single number
            }
        }
        return -1; // should never happen
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2,2,3,2};
    cout << sol.singleNumber(nums1) << endl; // 3

    vector<int> nums2 = {0,1,0,1,0,1,99};
    cout << sol.singleNumber(nums2) << endl; // 99

    vector<int> nums3 = {-2,-2,1,1,-3,1,-3,-3,-4,-2};
    cout << sol.singleNumber(nums3) << endl; // -4
}