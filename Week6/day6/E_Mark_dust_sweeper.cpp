#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        long long sum = 0, zero = 0;
        bool flag = false;

        for (int i = 0; i < n - 1; i++) 
        {
            if (!flag && v[i] != 0) 
            {
                flag = true;
            }
            if (flag) 
            {
                sum += v[i];
                if (v[i] == 0) 
                {
                    zero++;
                }
            }
        }
        cout << sum + zero << endl;
    }

    return 0;
}