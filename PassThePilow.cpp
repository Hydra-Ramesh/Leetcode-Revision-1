#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        int cycle = 2 * (n - 1);
        time = time % cycle;

        if(time <= n - 1) {
            return 1 + time; // moving forward
        } else {
            return 2 * n - time - 1; // moving backward
        }
    }
};

int main() {
    Solution sol;
    int n, time;

    cout << "Enter number of people: ";
    cin >> n;
    cout << "Enter time (seconds): ";
    cin >> time;

    int person = sol.passThePillow(n, time);
    cout << "Person holding the pillow after " << time << " seconds: " << person << endl;

    return 0;
}