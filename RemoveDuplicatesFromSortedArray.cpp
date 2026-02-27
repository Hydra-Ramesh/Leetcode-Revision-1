#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int k = 1; // position of next unique element

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; // overwrite duplicate
                k++;
            }
        }

        return k;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1,1,2,2,3,4,4,5};

    int k = sol.removeDuplicates(nums);

    cout << "Length after removing duplicates: " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; ++i)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}