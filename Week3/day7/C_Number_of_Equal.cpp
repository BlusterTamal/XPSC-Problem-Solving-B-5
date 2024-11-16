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

    long long result = 0;
    int i = 0, j = 0;

    while (i < n && j < m) 
    {
        if (a[i] == b[j]) 
        {
            // count duplicates in a
            int countA = 0, countB = 0;
            int currentA = a[i], currentB = b[j];
            while (i < n && a[i] == currentA) 
            {
                countA++;
                i++;
            }
            // count duplicates in b
            while (j < m && b[j] == currentB) 
            {
                countB++;
                j++;
            }
            // add the product of counts
            result += 1LL * countA * countB; // 1LL use for 2^63 -1 store larger values
        } 
        else if (a[i] < b[j]) 
        {
            i++;
        } 
        else 
        {
            j++;
        }
    }

    cout << result << endl;
    return 0;
}
