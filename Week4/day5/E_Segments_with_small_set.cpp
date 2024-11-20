#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    vector<int> freq(100001, 0);
    int left = 0;
    long long count = 0;
    int uq_count = 0;

    for (int right = 0; right < n; right++) 
    {
        freq[a[right]]++;

        if (freq[a[right]] == 1) 
        {
            uq_count++;
        }

        // Shrink the window until the unique count is greater than k
        while (uq_count > k) 
        {
            freq[a[left]]--;

            if (freq[a[left]] == 0) 
            {
                uq_count--;
            }
            left++;
        }

        count += (right - left + 1);
    }

    cout << count << endl;
    return 0;
}
