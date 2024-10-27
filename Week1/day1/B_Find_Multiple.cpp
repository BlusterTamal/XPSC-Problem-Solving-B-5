#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C, result = -1;
    cin >> A >> B >> C;

    if(A <= B)
    {
        for(int i = A; i <= B; i++)
        {
            if(i % C == 0)
            {
                result = i;
                break;
            }
        }
    }
    cout << result << endl;
    
    return 0;
}