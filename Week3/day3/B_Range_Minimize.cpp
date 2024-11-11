#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }

        if (N <= 3) 
        {
            cout << 0 << endl;
            continue;
        }
        sort(A.begin(), A.end());

        int op1 = A[N-1] - A[2];    // remove the smallest two elements
        int op2 = A[N-2] - A[1];    // remove one smallest and one largest
        int op3 = A[N-3] - A[0];    // remove the largest two elements
        int min_range = min({op1, op2, op3});
        
        cout << min_range << endl;
    }

    return 0;
}
