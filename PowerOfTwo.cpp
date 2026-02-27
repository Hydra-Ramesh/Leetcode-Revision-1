#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        while (n != 1) {
            if (n % 2 != 0) return false;  // if not divisible by 2
            n /= 2;
        }

        return true;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (sol.isPowerOfTwo(n))
        cout << n << " is a power of two." << endl;
    else
        cout << n << " is NOT a power of two." << endl;

    return 0;
}