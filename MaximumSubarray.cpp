#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int total = 0;

        for(int ele : nums) {
            if(total < 0) {
                total = 0;
            }
            total += ele;
            ans = max(total, ans);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = obj.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}