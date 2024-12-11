#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N, K, P;
        cin >> N >> K >> P;

        vector<int> chairs(N);
        for (int i = 0; i < N; i++) 
        {
            cin >> chairs[i];
        }

        sort(chairs.begin(), chairs.end());
        int tallest_ved = chairs[N - 1];

        int rem_varun = 0;
        for (int i = 0; i < N - 1; i++) 
        {
            rem_varun += chairs[i];
        }

        int ved_h = K + tallest_ved;
        int varun_h = P + rem_varun;

        if (ved_h > varun_h) 
        {
            cout << "Ved\n";
        } 
        else if (varun_h > ved_h) 
        {
            cout << "Varun\n";
        } 
        else 
        {
            cout << "Equal\n";
        }
    }

    return 0;
}