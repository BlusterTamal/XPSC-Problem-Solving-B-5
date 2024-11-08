#include <bits/stdc++.h>
using namespace std;

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
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        int left = 0, right = n - 1, left_1 = 1, right_1 = n;
        while (left  < right) 
        {
            if (v[left] == left_1 || v[left] == right_1) 
            {
                if (v[left] == left_1) 
                {
                    left_1++;
                }
                if (v[left] == right_1) 
                {
                    right_1--;
                }
                left++;
            } 
            else if (v[right] == right_1 || v[right] == left_1) 
            {
                if (v[right] == left_1) 
                {
                    left_1++;
                }
                if (v[right] == right_1) 
                {
                    right_1--;
                }
                right--;
            } 
            else 
            {
                break;
            }
        }

        if (left != right) 
        {
            cout << left + 1 << " " << right + 1 << endl;
        } 
        else 
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
