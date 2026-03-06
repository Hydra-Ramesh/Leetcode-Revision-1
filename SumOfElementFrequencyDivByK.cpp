#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfElementsDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int x : nums) {
            freq[x]++;
        }

        int total = 0;
        for(auto& p : freq) {
            if(p.second % k == 0) {
                total += p.first * p.second; // include all occurrences
            }
        }

        return total;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1,2,2,3,3,3,3,4};
    int k1 = 2;
    cout << sol.sumOfElementsDivisibleByK(nums1, k1) << endl; // 16

    vector<int> nums2 = {1,2,3,4,5};
    int k2 = 2;
    cout << sol.sumOfElementsDivisibleByK(nums2, k2) << endl; // 0

    vector<int> nums3 = {4,4,4,1,2,3};
    int k3 = 3;
    cout << sol.sumOfElementsDivisibleByK(nums3, k3) << endl; // 12
}