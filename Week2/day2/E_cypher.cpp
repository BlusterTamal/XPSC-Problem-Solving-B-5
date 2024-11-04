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
        
        vector<int> final_pos(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> final_pos[i];
        }

        vector<int> original_pos(n);

        for (int i = 0; i < n; i++) 
        {
            int moves_count;
            string moves;
            cin >> moves_count >> moves;

            int current_pos = final_pos[i];
            
            // Reverse the moves
            for (int j = moves_count - 1; j >= 0; j--) 
            {
                if (moves[j] == 'U') 
                {
                    current_pos = (current_pos - 1 + 10) % 10;
                } 
                else if (moves[j] == 'D') 
                {
                    current_pos = (current_pos + 1) % 10;
                }
            }
            
            original_pos[i] = current_pos;
        }

        for (int i = 0; i < n; i++) 
        {
            cout << original_pos[i] << " ";
        }
        cout << endl;
    }

    return 0;
}