#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;
    bool found = false, index[26] = {false};

    for (char c : S)
    {
        index[c - 'a'] = true;
    }

    for (int i = 0; i <= 25; i++)
    {
        if(!index[i])
        {
            cout << (char)('a' + i) << endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout << "None" << endl;
    }
    
    return 0;

}