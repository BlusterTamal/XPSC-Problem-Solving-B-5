#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A , B , coins = 0;
    cin >> A >> B;

    if(A > B)
    {
        coins = coins + A;
        A--;
    }
    else
    {
        coins = coins + B;
        B--;
    }

    if(A > B)
    {
        coins = coins + A;
    }
    else
    {
        coins = coins + B;
    }

    cout << coins << endl;

    return 0;
}