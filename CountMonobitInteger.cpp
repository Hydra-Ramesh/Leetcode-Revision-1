#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMonobit(int n) {
        int count = 1; // include 0
        int num = 1;
        
        while(num <= n) {
            count++;
            num = (num << 1) | 1; // generate next Monobit: 1, 11, 111, 1111, ...
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    int res = sol.countMonobit(n);
    cout << "Number of Monobit integers in [0, " << n << "]: " << res << endl;
    
    return 0;
}