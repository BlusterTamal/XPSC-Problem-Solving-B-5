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
        long long n, k;
        cin >> n >> k;
        
        long long year_1 = max((long long)1, n - k + 1);
        long long nl = ((n * (n + 1)) / 2) - ((year_1 * (year_1 - 1)) / 2);
        
        if (nl % 2 == 0) 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}