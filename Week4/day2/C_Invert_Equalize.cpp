#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int count_zero_group = 0;  // Groups of consecutive 0s
        int count_one_group = 0;   // 1s

        // Count the number of groups of 0s and 1s
        for (int i = 0; i < N; i++) 
        {
            if (S[i] == '0' && (i == 0 || S[i-1] != '0')) 
            {
                count_zero_group++;
            }
            if (S[i] == '1' && (i == 0 || S[i-1] != '1')) 
            {
                count_one_group++;
            }
        }

        // minimum number of operations
        cout << min(count_zero_group, count_one_group) << endl;
    }

    return 0;
}