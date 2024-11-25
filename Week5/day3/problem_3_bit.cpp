#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int xor_sum = 0;

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            xor_sum ^= a[i];
        }
        
        if(n % 2 == 0)
        {
            if (xor_sum == 0) 
            {
               cout << "0\n";
            } 
            else 
            {
               cout << "-1\n";
            }
        }
        else
        {
            cout << xor_sum << endl; 
        }
    }
    
    return 0;
}
