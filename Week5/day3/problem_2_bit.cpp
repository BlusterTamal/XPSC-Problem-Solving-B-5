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
        
        int total_XOR = 0;
        for (int i = 0; i < N; i++) 
        {
            total_XOR ^= A[i];
        }
        
        int min_XOR = total_XOR;
    
        for (int i = 0; i < N; i++) 
        {
            int curr_XOR = total_XOR ^ A[i];
            min_XOR = min(min_XOR, curr_XOR);
        }
        cout << min_XOR << "\n";
    }
    
    return 0;
}
