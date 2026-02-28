#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(') st.push(')');
            else if (c == '{') st.push('}');
            else if (c == '[') st.push(']');
            else {
                if (st.empty() || st.top() != c) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter parentheses string: ";
    cin >> s;

    if (sol.isValid(s))
        cout << s << " is valid." << endl;
    else
        cout << s << " is NOT valid." << endl;

    return 0;
}