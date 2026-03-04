#include <bits/stdc++.h>
using namespace std;

int addDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + (num - 1) % 9;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Result after adding digits repeatedly: " 
         << addDigits(num) << endl;

    return 0;
}