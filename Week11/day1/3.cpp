#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a(n + 1);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin() + 1, a.end());
        
        int c = 1;
        for(int i = ((n + 1) / 2 + 1); i <= n; i++)
        {
            if(a[i] == a[(n + 1) / 2])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        cout << c << "\n";
    }

    return 0;
}