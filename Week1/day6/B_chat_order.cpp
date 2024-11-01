#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> order;
    map<string, bool> seen;

    for (int i = 0; i < n; i++) 
    {
        string name;
        cin >> name;
        order.push_back(name);
    }

    for (int i = n - 1; i >= 0; i--) 
    {
        if (!seen[order[i]]) 
        {
            seen[order[i]] = true;
            cout << order[i] << "\n";
        }
    }

    return 0;
}
