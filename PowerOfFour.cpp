#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;

        while (n != 1) {
            if (n % 4 != 0) return false;  // must be divisible by 4
            n /= 4;
        }

        return true;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (sol.isPowerOfFour(n))
        cout << n << " is a power of four." << endl;
    else
        cout << n << " is NOT a power of four." << endl;

    return 0;
}