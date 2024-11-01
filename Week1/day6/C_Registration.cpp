#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> database;

    while (n--) 
    {
        string name;
        cin >> name;

        if (database.find(name) == database.end()) 
        {
            // if name not found in the database
            database[name] = 0;
            cout << "OK" << endl;
        } 
        else 
        {
            // else name already exists in the database
            database[name]++;
            cout << name << database[name] << endl;
        }
    }

    return 0;
}
