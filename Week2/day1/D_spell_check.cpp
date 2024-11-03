#include <bits/stdc++.h>
using namespace std;

bool is_valid_permutation(string s) 
{
    string timur = "Timur";
    sort(s.begin(), s.end());
    sort(timur.begin(), timur.end());
    return s == timur;
}

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;
        if (is_valid_permutation(s)) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
