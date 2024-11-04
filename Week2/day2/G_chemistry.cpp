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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // count character frequencies
        vector<int> freq(26, 0);
        for (char c : s) 
        {
            freq[c - 'a']++;
        }

        int odd_count = 0;
        for (int count : freq) 
        {
            if (count % 2 == 1) 
            {
                odd_count++;
            }
        }

        if (odd_count <= k) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            if (odd_count - k <= 1) 
            {
                cout << "YES" << endl;
            }
            else 
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}