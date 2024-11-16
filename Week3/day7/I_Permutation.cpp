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
        vector<vector<int>> matrix(n);
        vector<int> freq(n + 1); 

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n - 1; j++) 
            {
                int value;
                cin >> value;
                matrix[i].push_back(value);
            }
            freq[matrix[i][0]]++;
        }
        
        int max_f = 0, max_i;
        for (int i = 0; i <= n; i++) 
        {
            if (freq[i] > max_f) 
            {
                max_f = freq[i];
                max_i = i;
            }
        }
        cout << max_i << " ";
        for (int i = 0; i < n; i++) 
        {
            if (matrix[i][0] != max_i) 
            {
                for (int j = 0; j < n - 1; j++) 
                {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
                break;
            }
        }
    }
}
