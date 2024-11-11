#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    double team_score = X * 1.0 + Y * 0.5;
    double op_score = Z * 1.0 + Y * 0.5;
    int due_games = 4 - (X + Y + Z);

    if (team_score > op_score) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        double final_score = team_score + due_games;
        if (final_score > op_score) 
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
