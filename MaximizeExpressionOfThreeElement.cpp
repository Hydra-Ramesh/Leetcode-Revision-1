#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;

        // Fix a and b
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                // Find c not equal to i or j that is minimum
                for(int k = 0; k < n; k++){
                    if(k == i || k == j) continue;
                    int val = nums[i] + nums[j] - nums[k];
                    maxi = max(maxi, val);
                }
            }
        }

        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1,4,2,5};
    cout << sol.maximizeExpressionOfThree(nums1) << endl; // 8

    vector<int> nums2 = {-2,0,5,-2,4};
    cout << sol.maximizeExpressionOfThree(nums2) << endl; // 11
}