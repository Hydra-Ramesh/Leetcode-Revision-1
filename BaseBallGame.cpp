#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;

        for (auto &op : operations) {
            if (op == "+") {
                int top1 = st.top(); st.pop();
                int top2 = st.top();
                int val = top1 + top2;
                st.push(top1);       // push back the first top
                st.push(val);        // push new value
                sum += val;
            } else if (op == "D") {
                int val = 2 * st.top();
                st.push(val);
                sum += val;
            } else if (op == "C") {
                sum -= st.top();
                st.pop();
            } else {
                int val = stoi(op);
                st.push(val);
                sum += val;
            }
        }

        return sum;
    }
};

int main() {
    Solution sol;
    vector<string> ops = {"5", "2", "C", "D", "+"};
    cout << "Total points: " << sol.calPoints(ops) << endl; // Output: 30
    return 0;
}