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

        vector<int> s(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> s[i];
        }

        priority_queue<int> bonuses;
        long long int total_power = 0;

        for (int i = 0; i < n; i++) 
        {
            if (s[i] > 0) 
            {
                bonuses.push(s[i]);
            } 
            else if (s[i] == 0) 
            {
                if (!bonuses.empty()) 
                {
                    total_power = total_power + bonuses.top();
                    bonuses.pop();
                }
            }
        }

        cout << total_power << endl;
    }

    return 0;
}
