#include <bits/stdc++.h>
using namespace std;

// Simulated rand7() for local testing only
int rand7() {
    return rand() % 7 + 1;   // Generates number from 1 to 7
}

// Implement rand10() using rand7()
int rand10() {
    while (true) {
        int row = rand7();
        int col = rand7();

        int num = (row - 1) * 7 + col;  // Generates 1 to 49 uniformly

        if (num <= 40) {
            return (num - 1) % 10 + 1;  // Map to 1–10
        }
    }
}

int main() {
    srand(time(0));  // Seed random generator

    int n;
    cout << "Enter number of times to call rand10(): ";
    cin >> n;

    cout << "Generated numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << rand10() << " ";
    }

    cout << endl;
    return 0;
}