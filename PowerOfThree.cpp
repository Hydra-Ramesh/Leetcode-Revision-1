#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;

        while (n != 1) {
            if (n % 3 != 0) return false;
            n /= 3;
        }

        return true;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (sol.isPowerOfThree(n))
        cout << n << " is a power of three." << endl;
    else
        cout << n << " is NOT a power of three." << endl;

    return 0;
}