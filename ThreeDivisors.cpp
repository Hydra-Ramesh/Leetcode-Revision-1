#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to count divisors of n
    int countDivisors(int n) {
        int count = 0;
        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                if(i * i == n)
                    count += 1;  // perfect square
                else
                    count += 2;  // i and n/i
            }
        }
        return count;
    }

    // Function to check if n has exactly 3 divisors
    bool isThree(int n) {
        return countDivisors(n) == 3;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(sol.isThree(n)) {
        cout << n << " has exactly 3 divisors.\n";
    } else {
        cout << n << " does NOT have exactly 3 divisors.\n";
    }

    return 0;
}