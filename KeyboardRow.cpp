#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> r1 = {'q','w','e','r','t','y','u','i','o','p'};
        set<char> r2 = {'a','s','d','f','g','h','j','k','l'};
        set<char> r3 = {'z','x','c','v','b','n','m'};

        vector<string> ans;

        for(string word : words) {
            string w = "";
            for(char c : word) w += tolower(c);

            bool row1 = true, row2 = true, row3 = true;

            for(char c : w) {
                if(r1.count(c) == 0) row1 = false;
                if(r2.count(c) == 0) row2 = false;
                if(r3.count(c) == 0) row3 = false;
            }

            if(row1 || row2 || row3)
                ans.push_back(word);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<string> words = {"Hello","Alaska","Dad","Peace"};
    vector<string> res = sol.findWords(words);

    for(string w : res)
        cout << w << " ";
}