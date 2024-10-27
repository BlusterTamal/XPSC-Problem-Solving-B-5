#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long sum = 0;
    long long smallest_odd = -1;

    while(n--)
    {
        long long wet;
        cin >> wet;
        sum = sum + wet;

        if (wet % 2 != 0)
        {
            if (smallest_odd == -1 || wet < smallest_odd)
            {
                smallest_odd = wet;
            }
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - smallest_odd << endl;
    }

    return 0;
}