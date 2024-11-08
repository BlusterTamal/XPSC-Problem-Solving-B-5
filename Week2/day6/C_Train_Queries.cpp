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
        int n, k;
        cin >> n >> k;
        cin.ignore();
        
        map<int, int> first_seen, last_seen;
        for (int i = 1; i <= n; i++) 
        {
            int u;
            cin >> u;
            if (first_seen.find(u) == first_seen.end()) 
            {
                first_seen[u] = i;
            }
            last_seen[u] = i;
        }

        while (k--) 
        {
            int a, b;
            cin >> a >> b;
            if (first_seen.find(a) != first_seen.end() && 
                last_seen.find(b) != last_seen.end() && 
                first_seen[a] < last_seen[b]) 
            {
                cout << "YES" << "\n";
            } 
            else 
            {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}
