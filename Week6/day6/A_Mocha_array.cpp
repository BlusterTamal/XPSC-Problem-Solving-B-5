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
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());

        bool check_sort = false;
        for (int i = 0; i < n; i++) 
        {
            rotate(a.begin(), a.begin() + 1, a.end());
            if (a == sorted_a) 
            {
                check_sort = true;
                break;
            }
        }

        if (check_sort) 
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