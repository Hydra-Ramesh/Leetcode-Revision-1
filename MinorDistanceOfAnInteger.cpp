#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        int original = n;
        int rev = 0;

        while(n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }

        return abs(original - rev);
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Mirror Distance: " << sol.mirrorDistance(n);

    return 0;
}