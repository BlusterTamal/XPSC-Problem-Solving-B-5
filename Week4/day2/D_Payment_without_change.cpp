#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    
    while (q--) 
    {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;
        
        // the maximum sum can make using coins of value n
        long long max_n_coins_value = min(S / n, a) * n;
        
        // check if we use coins of value 1 to reach exactly S
        if (max_n_coins_value + b >= S) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}