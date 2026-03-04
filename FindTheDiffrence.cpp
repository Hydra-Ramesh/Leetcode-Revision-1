#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i = 0; i < s.size(); i++) {
            if(s[i] != t[i]) return t[i];
        }

        return t[t.size() - 1];
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    char diff = sol.findTheDifference(s, t);
    cout << "The extra character in t is: " << diff << endl;

    return 0;
}