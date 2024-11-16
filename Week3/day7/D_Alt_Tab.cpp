#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> vec(n);
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    
    set<string> processed; // track processed strings
    
    for (int i = vec.size() - 1; i >= 0; i--) 
    {
        string str = vec[i];
        if (processed.find(str) != processed.end()) 
        {
            continue;
        }
        else 
        {
            ans = ans + str[str.size() - 2];
            ans = ans + str[str.size() - 1];
            processed.insert(str); // mark the string as processed
        }
    }

    cout << ans << endl;
    return 0;
}
