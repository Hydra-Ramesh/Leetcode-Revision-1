#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfChild(int n, int k) {
        int cycle = 2 * (n - 1);
        k = k % cycle;

        if(k <= n - 1) {
            return k; // moving right
        } else {
            return cycle - k; // moving left
        }
    }
};

int main() {
    Solution sol;
    int n, k;
    cout << "Enter number of children: ";
    cin >> n;
    cout << "Enter seconds k: ";
    cin >> k;

    int child = sol.numberOfChild(n, k);
    cout << "Child with the ball after " << k << " seconds: " << child << endl;

    return 0;
}