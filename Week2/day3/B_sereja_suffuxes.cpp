#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    
    // distinct_element count from i to n
    vector<int> distinct_count(n);
    set<int> elements;
    
    for (int i = n - 1; i >= 0; i--) 
    {
        elements.insert(a[i]);
        distinct_count[i] = elements.size(); // unique elements numbers
    }
    
    // answer queries
    while (m--) 
    {
        int li;
        cin >> li;
        cout << distinct_count[li - 1] << endl;
    }
    
    return 0;
}