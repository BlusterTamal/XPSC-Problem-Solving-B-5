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
        int n, c;
        cin >> n >> c; // Number of points and available coins

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        // the total cost (teleporter cost + distance cost)
        vector<int> total_cost(n);
        for (int i = 0; i < n; i++) 
        {
            total_cost[i] = a[i] + (i + 1); // (i + 1) is the distance cost to reach point i+1
        }

        sort(total_cost.begin(), total_cost.end());

        // Count how many teleporters we can use within the coin limit
        int used_teleporters = 0;
        for (int cost : total_cost) 
        {
            if (c >= cost) 
            {
                c -= cost;
                ++used_teleporters;
            } 
            else 
            {
                break;
            }
        }

        cout << used_teleporters << endl;
    }

    return 0;
}