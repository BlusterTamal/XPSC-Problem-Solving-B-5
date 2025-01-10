#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;

    while (t--) 
    {
        int n, a, b;
        cin >> n >> a >> b;

        int p_y = n / 2;
        int s_y = n % 2;
 
        int min_c = min(p_y * b + s_y * a, n * a);

        cout << min_c << endl;
    }

    return 0;
}