#include <bits/stdc++.h>
using namespace std;

void strong_password() 
{
    string s;
    cin >> s;
    bool inserted = false;

    for (int i = 0; i < s.size() - 1; i++) 
    {
        if (s[i] == s[i + 1]) 
        {
            s.insert(s.begin() + i + 1, (s[i] != 'z') ? (char)(s[i] + 1) : 'a');
            inserted = true;
            break;
        }
    }

    if (!inserted) 
    {
        s.push_back((s[s.size() - 1] != 'z') ? (char)(s[s.size() - 1] + 1) : 'a');
    }

    cout << s << endl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        strong_password();
    }

    return 0;
}
