#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int x, y;
        cin >> x >> y;
        int result = max((y + 1) / 2, (x + y * 4 + 14) / 15);
        cout << result << endl;
    }
    
    return 0;
}
