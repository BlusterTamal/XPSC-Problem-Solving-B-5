#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        string p;
        cin >> n >> p;
        
        vector<int> dp(n, -1);
        dp[0] = (p[0] == '@') ? 1 : 0;
        
        for (int i = 1; i < n; i++) 
        {
            if (p[i] == '*') 
            {
                continue;
            }
            
            int coins = (p[i] == '@') ? 1 : 0;
            if (i - 1 >= 0 && dp[i - 1] != -1)
            {
                dp[i] = max(dp[i], dp[i - 1] + coins);
            }

            if (i - 2 >= 0 && dp[i - 2] != -1)
            {
                dp[i] = max(dp[i], dp[i - 2] + coins);
            }
        }
        
        int max_coins = 0;
        for (int i = 0; i < n; i++) 
        {
            max_coins = max(max_coins, dp[i]);
        }
        
        cout << max_coins << "\n";
    }
    return 0;
}