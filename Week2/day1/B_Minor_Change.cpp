#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    int count = 0;
    int size_s = S.size();

    for(int i = 0; i < size_s; i++)
    {
        if(S[i] != T[i])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}