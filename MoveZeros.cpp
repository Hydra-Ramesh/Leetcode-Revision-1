#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        // Move all non-zero elements forward
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                nums[count] = nums[i];
                count++;
            }
        }

        // Fill remaining positions with 0
        while(count < n) {
            nums[count] = 0;
            count++;
        }
    }
};

int main() {
    Solution obj;

    vector<int> nums = {0, 1, 0, 3, 12};

    obj.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}