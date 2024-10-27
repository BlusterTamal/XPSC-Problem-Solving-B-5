#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, index = 0;
    cin >> A >> B;

    for(int i = A; i <= B; i++)
    {
        if(A <= i && B >= i)
        {
            index++;
        }
    }
    cout << index << endl;

    return 0;
}