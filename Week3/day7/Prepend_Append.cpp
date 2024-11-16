#include <bits/stdc++.h>
using namespace std;

int finding_shortest_length(string s) 
{
    int left = 0, right = s.size() - 1;

    // Reduce the string by matching '01' or '10' pairs
    while (left < right && ((s[left] == '0' && s[right] == '1') || (s[left] == '1' && s[right] == '0'))) 
    {
        left++;
        right--;
    }

    // remaining unmatched part
    return right - left + 1;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << finding_shortest_length(s) << endl;
    }
    return 0;
}
