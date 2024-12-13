#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        int result = 0;
        for (int i = 1; i <= n; i++) 
        {
            int value;
            cin >> value;
            result = __gcd(result, abs(value - i));
        }
        cout << result << '\n';
    }

    return 0;
}