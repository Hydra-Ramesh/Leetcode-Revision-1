#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Step 1: Find intersection point in the cycle
        while (true) {
            slow = nums[slow];        // move 1 step
            fast = nums[nums[fast]];  // move 2 steps
            if (slow == fast) break;
        }

        // Step 2: Find the start of the cycle (duplicate number)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1,3,4,2,2};
    cout << sol.findDuplicate(nums1) << endl; // 2

    vector<int> nums2 = {3,1,3,4,2};
    cout << sol.findDuplicate(nums2) << endl; // 3

    vector<int> nums3 = {3,3,3,3,3};
    cout << sol.findDuplicate(nums3) << endl; // 3
}