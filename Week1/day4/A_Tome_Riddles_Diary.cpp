#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, bool> tell;
    string name;

    for (int i = 0; i < n; ++i) 
    {
        cin >> name;
        if (tell[name]) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
            tell[name] = true;
        }
    }

    return 0;
}
