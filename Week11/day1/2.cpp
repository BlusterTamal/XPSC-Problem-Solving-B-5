#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int f = 0, c = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i]=='.' && s[i + 1]=='.' && s[i + 2]=='.')
            {
                f = 1;
            }
            else if(s[i] == '.')
            {
                c++;
            }
        }

        if(f == 1)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}