#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--)
    {
        int X, Y;
        cin >> X >> Y;

        if(X % 3 >= Y % 3)
        {
            cout << Y % 3 << endl;
        }
        else
        {
            cout << X % 3 << endl;
        }
    }
    return 0;
}