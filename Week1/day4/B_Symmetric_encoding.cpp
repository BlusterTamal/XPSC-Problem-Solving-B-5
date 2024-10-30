#include <bits/stdc++.h>
using namespace std;

string decoding(string& b) 
{
    vector<char> distinct_letter(26, 0);
    for (char c : b) 
    {
        distinct_letter[c - 'a'] = 1;
    }

    string r;
    for (int i = 0; i < 26; i++) 
    {
        if (distinct_letter[i] == 1) 
        {
            r = r + (char)('a' + i);
        }
    }

    int len = r.size();
    string s;
    for (char c : b) 
    {
        int pos = r.find(c);
        s = s + r[len - 1 - pos];
    }

    return s;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        string b;
        cin >> n >> b;

        cout << decoding(b) << endl;
    }

    return 0;
}
