#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    int n = nums.size();

    for(int i = 0; i < n; i++) {

        if(nums[i] > 0) break;

        if(i > 0 && nums[i] == nums[i-1]) 
            continue;

        int left = i + 1;
        int right = n - 1;

        while(left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if(sum == 0) {
                ans.push_back({nums[i], nums[left], nums[right]});

                left++;
                right--;

                while(left < right && nums[left] == nums[left-1]) left++;
                while(left < right && nums[right] == nums[right+1]) right--;
            }
            else if(sum < 0)
                left++;
            else
                right--;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    cout << "Triplets are:\n";
    for(auto &triplet : result) {
        for(int x : triplet) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}