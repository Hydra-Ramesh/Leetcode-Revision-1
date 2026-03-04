#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        sort(deck.begin(), deck.end());

        vector<int> counts;
        int n = deck.size();
        int cnt = 1;

        for(int i = 1; i < n; i++) {
            if(deck[i] == deck[i-1]) {
                cnt++;
            } else {
                counts.push_back(cnt);
                cnt = 1;
            }
        }
        counts.push_back(cnt); // push last count

        // Find minimum count without using min_element
        int minCount = counts[0];
        for(int c : counts) {
            if(c < minCount) minCount = c;
        }

        // Try all possible X from 2 to minCount
        for(int X = 2; X <= minCount; X++) {
            bool valid = true;
            for(int c : counts) {
                if(c % X != 0) {
                    valid = false;
                    break;
                }
            }
            if(valid) return true;
        }

        return false;
    }
};

int main() {
    int n;
    cout << "Enter number of cards in deck: ";
    cin >> n;

    vector<int> deck(n);
    cout << "Enter the cards: ";
    for(int i = 0; i < n; i++) {
        cin >> deck[i];
    }

    Solution sol;
    if(sol.hasGroupsSizeX(deck)) {
        cout << "Can split into groups of size X >= 2\n";
    } else {
        cout << "Cannot split into groups of size X >= 2\n";
    }

    return 0;
}