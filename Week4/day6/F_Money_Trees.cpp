#include <bits/stdc++.h>
using namespace std;

int subarr_max_len(vector<int>& fruits, vector<int>& heights, int n, int k) 
{
    int left = 0, right = 0;
    int curr_sum = 0;
    int mx_len = 0;

    while (right < n) 
    {
        curr_sum += fruits[right];

        while (left < right && (heights[right-1] % heights[right] != 0 || curr_sum > k)) 
        {
            curr_sum -= fruits[left];
            left++;
        }

        if (curr_sum <= k) 
        {
            mx_len = max(mx_len, right - left + 1);
        }
        right++;
    }

    return mx_len;
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        vector<int> h(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) 
        {
            cin >> h[i];
        }
        
        cout << subarr_max_len(a, h, n, k) << endl;
    }

    return 0;
}
