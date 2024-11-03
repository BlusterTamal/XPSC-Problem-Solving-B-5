#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int A[N];
    bool found = false;

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] != X)
        {
            cout << A[i] << " ";
            found = true;
        }
    }
    if (found)
    {
        cout << endl;
    }

    return 0;

}