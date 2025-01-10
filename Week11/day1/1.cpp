#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

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
        
        vector<int> A = a;
        sort(A.begin(), A.end());
        
        bool check = false;
        for (int i = 0; i < n; i++) 
        {
            vector<int> r;
            r.insert(r.end(), a.begin() + i, a.end());
            r.insert(r.end(), a.begin(), a.begin() + i);
            
            if (r == A) 
            {
                check = true;
                break;
            }
        }
    
        if (check) 
        {
            cout << "Yes" << endl;
        } 
        else 
        {
            cout << "No" << endl;
        }
    }
    
    return 0;
}