#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    // check all 4 sides
                    if (i == 0 || grid[i-1][j] == 0) cnt++;
                    if (j == 0 || grid[i][j-1] == 0) cnt++;
                    if (i == n-1 || grid[i+1][j] == 0) cnt++;
                    if (j == m-1 || grid[i][j+1] == 0) cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> grid = {
        {0,1,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,0,0}
    };

    int perimeter = sol.islandPerimeter(grid);
    cout << "Island Perimeter: " << perimeter << endl;

    return 0;
}