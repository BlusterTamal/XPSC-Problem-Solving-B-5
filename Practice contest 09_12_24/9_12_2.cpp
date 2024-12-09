#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int H, X, Y;
        cin >> H >> X >> Y;
    
        int normal_a = (H + X - 1) / X;
        if (Y >= H) 
        {
            normal_a = 1;
        } 
        else 
        {
            int special_a = 1 + (H - Y + X - 1) / X;
            normal_a = min(normal_a, special_a);
        }
        
        cout << normal_a << endl;
    }
    return 0;
}