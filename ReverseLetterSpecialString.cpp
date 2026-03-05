#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseByType(string s) {
        int n = s.size();
        int i = 0, j = n - 1;

        // Reverse alphabet characters
        while(i <= j) {
            if(isalpha(s[i]) && isalpha(s[j])) {
                swap(s[i++], s[j--]);
            } 
            else if(isalpha(s[i])) {
                j--;
            } 
            else if(isalpha(s[j])) {
                i++;
            } 
            else {
                i++;
                j--;
            }
        }

        // Reverse non-alphabet characters
        i = 0;
        j = n - 1;
        while(i <= j) {
            if(!isalpha(s[i]) && !isalpha(s[j])) {
                swap(s[i++], s[j--]);
            } 
            else if(!isalpha(s[i])) {
                j--;
            } 
            else if(!isalpha(s[j])) {
                i++;
            } 
            else {
                i++;
                j--;
            }
        }

        return s;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    string result = sol.reverseByType(s);

    cout << "Result: " << result << endl;

    return 0;
}