#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<pair<string, string>> A_unique_leaves;
    
    for (int i = 0; i < n; i++) 
    {
        string species, color;
        cin >> species >> color;
        A_unique_leaves.insert({species, color});  // insert a pair of species and color
    }
    
    cout << A_unique_leaves.size() << endl;
    
    return 0;
}
