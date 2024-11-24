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
        string s = "abcdefghijklmnopqrstuvwxyz";
        int n;
        cin >> n;
        map<char, int> mp;
        for (auto ch : s)
        {
            mp[ch] = 0;
        }
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
 
            for (auto [k, val] : mp)
            {
                if (val == x)
                {
                    cout << k;
                    mp[k]++;
                    break;
                }
            }
        }
        cout << endl;
    }
 
    return 0;
}