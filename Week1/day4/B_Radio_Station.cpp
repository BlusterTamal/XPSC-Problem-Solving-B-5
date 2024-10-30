#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> server;
    string name, ip;

    for (int i = 0; i < n; i++) 
    {
        cin >> name >> ip;
        server[ip] = name;
    }

    string command;
    for (int i = 0; i < m; i++) 
    {
        cin >> command >> ip;
        ip.pop_back();
        cout << command << " " << ip << "; #" << server[ip] << '\n';
    }

    return 0;
}