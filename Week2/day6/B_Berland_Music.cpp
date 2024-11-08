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
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
        }

        string s;
        cin >> s;

        vector<pair<int, int>> d, l;

        for (int i = 0; i < n; i++) 
        {
            pair<int, int> current_pair = {p[i], i};

            if (s[i] == '0') 
            {
                d.push_back(current_pair);
            } 
            else 
            {
                l.push_back(current_pair);
            }
        }

        sort(d.begin(), d.end());
        sort(l.begin(), l.end());

        vector<int> q(n);
        int rank = 1;

        for (auto &pair : d) 
        {
            q[pair.second] = rank++;
        }
        
        for (auto &pair : l)
        {
            q[pair.second] = rank++;
        }

        for (int val : q) 
        {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
