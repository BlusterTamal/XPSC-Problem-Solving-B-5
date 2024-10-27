#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int S, T, index = 0;
    cin >> S >> T;

    for(int a = 0; a <= 100; a++)
    {
        for(int b = 0; b <= 100; b++)
        {
            for(int c = 0; c <= 100; c++)
            {
                if(((a + b + c) <= S) && ((a * b * c) <= T))
                {
                    index++;
                }
            }
        }
    }
    cout << index << endl;

    return 0;
}