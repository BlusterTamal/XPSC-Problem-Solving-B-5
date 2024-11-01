#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> order;
    map<string, bool> seen;

    for (int i = 0; i < n; i++) 
    {
        string participate;
        cin >> participate;

        if (!seen[participate]) 
        {
            order.push_back(participate);
            seen[participate] = true;
        } 
        else 
        {
            order.erase(remove(order.begin(), order.end(), participate), order.end());
            order.push_back(participate);
        }
    }

    for (auto it = order.rbegin(); it != order.rend(); it++) 
    {
        cout << *it << endl;
    }

    return 0;
}
