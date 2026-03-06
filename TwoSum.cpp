#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int match = target - num;

            if(seen.count(match)) {
                return {seen[match], i};
            }

            seen[num] = i;
        }

        return {};
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(nums, target);

    cout << "Indices: ";
    for(int i : result) {
        cout << i << " ";
    }

    return 0;
}