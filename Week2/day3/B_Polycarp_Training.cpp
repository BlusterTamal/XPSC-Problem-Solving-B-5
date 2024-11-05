#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    
    // ascending order
    sort(a.begin(), a.end());
    
    int days = 0;
    int problem_need = 1;
    
    for (int i = 0; i < n; i++) 
    {
        // if the current contest has enough problems for the current day
        if (a[i] >= problem_need) 
        {
            days++;  // polycarp can train for another day
            problem_need++;  // go to next day
        }
    }
    
    cout << days << endl;  // maximum number of days

    return 0;
    
}