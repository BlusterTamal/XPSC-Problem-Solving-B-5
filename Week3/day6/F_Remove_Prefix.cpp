#include <bits/stdc++.h>
using namespace std;

int min_removed(vector<int>& a) 
{
    vector<bool> seen(a.size() + 1, false);
    int n = a.size();

    for (int i = n - 1; i >= 0; i--) 
    {
        if (seen[a[i]]) 
        {
            return i + 1;
        }
        seen[a[i]] = true;
    }
    return 0;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        cout << min_removed(a) << endl;
    }

    return 0;
}