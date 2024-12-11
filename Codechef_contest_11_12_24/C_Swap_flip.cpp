#include <bits/stdc++.h>
using namespace std;

bool transform(string S, string T) 
{
    int count = 0;
    int n = S.length();

    for (int i = 0; i < n; i++) 
    {
        if (S[i] != T[i]) 
        {
            count++;
        }
    }

    return count % 2 == 0;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;
        string S, T;
        cin >> S >> T;

        cout << (transform(S, T) ? "YES" : "NO") << '\n';
    }

    return 0;
}
