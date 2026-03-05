#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();

        for(int i = 0; i < n; i += 2*k) {
            int left = i;
            int right = min(i + k - 1, n - 1);

            while(left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};

int main() {
    Solution sol;
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;
    cout << "Enter k: ";
    cin >> k;

    string result = sol.reverseStr(s, k);
    cout << "Output: " << result;

    return 0;
}