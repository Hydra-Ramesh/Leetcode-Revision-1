#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDominantIndices(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n - 1; i++) { // last element cannot be dominant
            int sum = 0;
            int rightCount = n - i - 1;
            for(int j = i + 1; j < n; j++) {
                sum += nums[j];
            }
            double average = (double)sum / rightCount;
            if(nums[i] > average) count++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    int n, x;
    vector<int> nums;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }

    int res = sol.countDominantIndices(nums);
    cout << "Number of dominant indices: " << res << endl;

    return 0;
}