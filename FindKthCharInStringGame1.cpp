#include <iostream>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while ((int)s.size() < k) {
            int n = s.size();
            for (int i = 0; i < n; ++i)
                s += char('a' + (s[i] - 'a' + 1) % 26);
        }
        return s[k - 1];
    }
};

int main() {
    Solution sol;

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    char result = sol.kthCharacter(k);
    cout << "The " << k << "-th character is: " << result << endl;

    return 0;
}