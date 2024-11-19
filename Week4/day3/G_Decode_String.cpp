#include <bits/stdc++.h>
using namespace std;

void decode_string() 
{
    int q;
    cin >> q;

    while (q--) 
    {
        int n;
        cin >> n;
        string t;
        cin >> t;

        string result = "";
        int i = n - 1;

        // string `t` from right to left
        while (i >= 0) 
        {
            if (t[i] == '0') 
            {
                // The number is a two-digit letter encoding
                int num = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
                result += (char)('a' + num - 1);
                i -= 3; // Skip the two digits and the '0'
            } 
            else 
            {
                // for single-digit letter encoding
                int num = t[i] - '0';
                result += (char)('a' + num - 1);
                i--; // Move one step left
            }
        }

        // result is constructed in reverse order
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
}

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    decode_string();
    return 0;
}
