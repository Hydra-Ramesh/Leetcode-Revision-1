#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> result;

        for(int ele : nums){
            freq[ele]++;
        }

        for(auto it : freq){
            if(it.second > 1){
                result.push_back(it.first);
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> duplicates = obj.findDuplicates(nums);

    cout << "Duplicates: ";
    for(int x : duplicates){
        cout << x << " ";
    }

    return 0;
}