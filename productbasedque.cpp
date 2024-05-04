#include <iostream>
#include <vector>
using namespace std;

int countWays(int m, int n, int right_moves, int down_moves) {
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i > 0 && right_moves >= j) {
                dp[i][j] += dp[i - 1][j];
            }
            if (j > 0 && down_moves >= i) {
                dp[i][j] += dp[i][j - 1];
            }
        }
    }

    return dp[m][n];
}

int main() {
    int m, n, right_moves, down_moves;
    cin >> m >> n >> right_moves >> down_moves;
    cout << countWays(m - 1, n - 1, right_moves, down_moves) << endl;
    return 0;
}
