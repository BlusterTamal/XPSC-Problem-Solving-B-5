#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        int lw_bnd_k = 1, upr_bnd_k = 1e9;
        set<int> f_val;
        
        for (int i = 0; i < n; i++) 
        {
            int a, x;
            cin >> a >> x;
            if (a == 1) 
            {
                lw_bnd_k = max(lw_bnd_k, x);
            } 
            else if (a == 2) 
            {
                upr_bnd_k = min(upr_bnd_k, x);
            } 
            else 
            {
                f_val.insert(x);
            }
        }
        
        if (lw_bnd_k > upr_bnd_k) 
        {
            cout << 0 << "\n";
            continue;
        }
        
        int c = (upr_bnd_k - lw_bnd_k + 1);
        for (int x : f_val) 
        {
            if (x >= lw_bnd_k && x <= upr_bnd_k)
            {
                c--;
            }
        }
        
        cout << c << "\n";
    }
    
    return 0;
}