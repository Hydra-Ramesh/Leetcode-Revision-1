#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    double radius;
    double x_center;
    double y_center;

public:
    Solution(double radius, double x_center, double y_center) {
        this->radius = radius;
        this->x_center = x_center;
        this->y_center = y_center;
    }

    vector<double> randPoint() {
        double U = (double) rand() / RAND_MAX;
        double theta = ((double) rand() / RAND_MAX) * 2 * M_PI;

        double r = radius * sqrt(U);

        double x = x_center + r * cos(theta);
        double y = y_center + r * sin(theta);

        return {x, y};
    }
};

int main() {
    srand(time(0));

    double radius, x_center, y_center;
    cout << "Enter radius, x_center, y_center: ";
    cin >> radius >> x_center >> y_center;

    Solution sol(radius, x_center, y_center);

    int n;
    cout << "How many random points to generate? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        vector<double> point = sol.randPoint();
        cout << point[0] << " " << point[1] << endl;
    }

    return 0;
}