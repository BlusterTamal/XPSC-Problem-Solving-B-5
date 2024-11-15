#include <bits/stdc++.h>
using namespace std;

long long max_energy_stored(int n, int m, int h, vector<int>& cars, vector<int>& outlets) 
{
    // discending order
    sort(cars.rbegin(), cars.rend());
    sort(outlets.rbegin(), outlets.rend());

    long long total_e = 0;

    // match cars and outlets greedily
    int l = min(n, m);
    for (int i = 0; i < l; i++) 
    {
        // energy that can be stored by this car from this outlet
        long long energy = min((long long)cars[i], (long long)outlets[i] * h);
        total_e = total_e + energy;
    }

    return total_e;
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, m, h;
        cin >> n >> m >> h;

        vector<int> cars(n), outlets(m);
        for (int i = 0; i < n; i++) 
        {
            cin >> cars[i];
        }
        for (int i = 0; i < m; i++) 
        {
            cin >> outlets[i];
        }

        cout << max_energy_stored(n, m, h, cars, outlets) << endl;
    }

    return 0;
}
