#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) 
    {
        cin >> b[j];
    }

    vector<int> result(m);
    int i = 0; // pointer for array `a`

    for (int j = 0; j < m; j++) 
    { // pointer for array `b`
        while (i < n && a[i] < b[j]) i++; // count elements in `a` less than `b[j]`
        result[j] = i;
    }

    // Print the result
    for (int x : result) 
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
