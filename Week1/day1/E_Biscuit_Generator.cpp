#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, T, index = 0;
    cin >> A >> B >> T;

    for(int i = 1; i <= 20; i++)
    {
        if(i*A <= double(T + 0.5))
        {
            index = index + B;
        }
        else
        {
            break;
        }
    }
    cout << index << endl;

    return 0;
}