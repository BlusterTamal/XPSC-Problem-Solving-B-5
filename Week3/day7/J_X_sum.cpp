#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n >> m; // row, column
        
        int board[200][200];  // 2D array for the chessboard
        long long main_diagonal[400] = {0};  // sum of main diagonals
        long long anti_diagonal[400] = {0};  // sum of anti-diagonals

        // input board values and calc diagonal sums
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                cin >> board[i][j];
                main_diagonal[i - j + m - 1] += board[i][j];  // update main diagonal sum
                anti_diagonal[i + j] += board[i][j];         // update anti-diagonal sum
            }
        }

        long long max_sum = 0;

        // for each cell, calc the sum of attacked cells and update the max
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                // sum of cells attacked by the bishop at (i, j)
                long long current_sum = main_diagonal[i - j + m - 1] + anti_diagonal[i + j] - board[i][j];
                max_sum = max(max_sum, current_sum);  // track the max sum
            }
        }

        cout << max_sum << endl; // ind. testcase max sum opt
    }
    return 0;
}
