#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string finalString(string s) {
        string result = "";

        for(char c : s) {
            if(c == 'i') {
                reverse(result.begin(), result.end());
            }
            else {
                result += c;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Output: " << sol.finalString(s);

    return 0;
}