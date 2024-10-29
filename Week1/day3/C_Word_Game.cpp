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

        vector<string> words(3 * n);
        vector<int> scores(3, 0);
        map<string, int> count;

        for (int i = 0; i < 3 * n; i++) 
        {
            cin >> words[i];
            count[words[i]]++;
        }

        for (int i = 0; i < 3 * n; i++) 
        {
            string word = words[i];
            int team = i / n;

            if (count[word] == 1) 
            {
                scores[team] = scores[team] + 3;
            } 
            else if (count[word] == 2) 
            {
                scores[team] = scores[team] + 1;
            }
        }

        cout << scores[0] << " " << scores[1] << " " << scores[2] << endl;
    }

    return 0;
}
