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
        string s;
        cin >> s;

        vector<int> description(n, 0);
        long long initial_value = 0;

        for (int i = 0; i < n; i++) 
        {
            if (s[i] == 'L') 
            {
                initial_value = initial_value + i; // count people to the left
                description[i] = (n - 1 - i) - i; // if flipped to 'R'
            } 
            else // s[i] == 'R'
            { 
                initial_value += (n - 1 - i); // right
                description[i] = i - (n - 1 - i); // if flipped to 'L'
            }
        }

        sort(description.rbegin(), description.rend());

        long long current_value = initial_value;
        for (int j = 0; j < n; j++) 
        {
            if (description[j] > 0)
            {
                current_value = current_value + description[j];
            }
            cout << current_value << " ";
        }
        cout << "\n";
    }

    return 0;
}
