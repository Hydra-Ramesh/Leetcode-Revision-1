#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;
        while(i < j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> s(n);

    cout << "Enter characters: ";
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sol.reverseString(s);

    cout << "Reversed string: ";
    for(char c : s) {
        cout << c << " ";
    }

    return 0;
}