#include <bits/stdc++.h>
using namespace std;

char compare_sizes(string& a, string& b) 
{
    if (a == b) 
    {
        return '=';
    }

    if (a == "M") 
    {
        return (b == "M" ? '=' : (b.back() == 'S' ? '>' : '<'));
    }
    if (b == "M") 
    {
        return (a.back() == 'S' ? '<' : '>');
    }

    if (a.back() == 'S' && b.back() == 'S') 
    {
        return (a.size() > b.size() ? '<' : '>');
    }

    if (a.back() == 'L' && b.back() == 'L') 
    {
        return (a.size() > b.size() ? '>' : '<');
    }

    return (a.back() == 'S' ? '<' : '>');
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        string a, b;
        cin >> a >> b;
        cout << compare_sizes(a, b) << endl;
    }
    return 0;
}
