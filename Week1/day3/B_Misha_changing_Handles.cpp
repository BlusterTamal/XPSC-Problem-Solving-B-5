#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map<string, string> current;
    map<string, string> original;

    while (q--) 
    {
        string old_h, new_h;
        cin >> old_h >> new_h;

        string initial_h = (current.count(old_h) ? current[old_h] : old_h);
        
        current[new_h] = initial_h;
        original[initial_h] = new_h;
    }

    cout << original.size() << '\n';
    for (auto& e : original) 
    {
        cout << e.first << " " << e.second << '\n';
    }

    return 0;
}
