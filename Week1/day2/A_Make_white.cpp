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

        int first_pos = s.find('B');
        int last_pos = s.rfind('B');

        if (first_pos != -1 && last_pos != -1) 
        {
            cout << last_pos - first_pos + 1 << endl;
        }
    }

    return 0;
}