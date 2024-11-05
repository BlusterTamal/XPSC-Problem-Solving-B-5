#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        
        // ascending order
        sort(a.begin(), a.end());
        
        // find maximum frequency by counting consecutive elements
        int max_freq = 1;
        int current_freq = 1;
        
        for (int i = 1; i < n; i++) 
        {
            if (a[i] == a[i - 1]) 
            {
                current_freq++;
            } 
            else 
            {
                max_freq = max(max_freq, current_freq);
                current_freq = 1;
            }
        }
        // update max_freq for the last element group
        max_freq = max(max_freq, current_freq);
        
        // minimum size of the array after all possible way
        if (max_freq <= n / 2) 
        {
            cout << n % 2 << endl; // even 1, odd 0
        } 
        else 
        {
            cout << 2 * max_freq - n << endl;  // remaining elements
        }
    }

    return 0;
    
}