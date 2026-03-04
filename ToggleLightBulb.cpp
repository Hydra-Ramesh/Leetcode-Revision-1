#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> freq;
        for(int b : bulbs) {
            freq[b]++;
        }

        vector<int> result;
        for(auto& p : freq) {
            if(p.second % 2 == 1) { // odd → bulb is ON
                result.push_back(p.first);
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of bulbs toggled: ";
    cin >> n;

    vector<int> bulbs(n);
    cout << "Enter the bulbs numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> bulbs[i];
    }

    vector<int> res = sol.toggleLightBulbs(bulbs);

    if(res.empty()) {
        cout << "No bulbs are ON." << endl;
    } else {
        cout << "Bulbs that are ON: ";
        for(int b : res) cout << b << " ";
        cout << endl;
    }

    return 0;
}