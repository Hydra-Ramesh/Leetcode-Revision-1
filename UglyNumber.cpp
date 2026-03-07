#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0)
            return false;

        if (n % 2 == 0) {
            return isUgly(n / 2);
        }
        if (n % 3 == 0) {
            return isUgly(n / 3);
        }
        if (n % 5 == 0) {
            return isUgly(n / 5);
        }

        if (n == 1)
            return true;
        else
            return false;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (obj.isUgly(n))
        cout << n << " is an Ugly Number" << endl;
    else
        cout << n << " is NOT an Ugly Number" << endl;

    return 0;
}