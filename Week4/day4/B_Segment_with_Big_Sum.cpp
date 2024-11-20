#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int start = 0;
    long long curr_sum = 0;
    int mn_len = INT_MAX;

    for (int end = 0; end < n; end++) 
    {
        curr_sum += a[end];

        // shrink the window until the sum becomes less than `s`
        while (curr_sum >= s) 
        {
            mn_len = min(mn_len, end - start + 1);
            curr_sum -= a[start];
            ++start;
        }
    }

    if (mn_len == INT_MAX) 
    {
        cout << -1 << endl;
    } 
    else 
    {
        cout << mn_len << endl;
    }

    return 0;
}
