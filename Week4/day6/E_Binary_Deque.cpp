#include <bits/stdc++.h>
using namespace std;

int min_op_sum(vector<int>& arr, int n, int s) 
{
    int sum_total = 0;
    for (int num : arr) 
    {
        sum_total += num;
    }
    
    if (sum_total < s) 
    {
        return -1;
    }
    if (s == 0) 
    {
        return n;
    }
    
    int left = 0, curr_sum = 0, max_len = 0;
    for (int right = 0; right < n; right++) 
    {
        curr_sum += arr[right];
        
        while (curr_sum > s) 
        {
            curr_sum -= arr[left];
            ++left;
        }
        
        if (curr_sum == s) 
        {
            max_len = max(max_len, right - left + 1);
        }
    }
    
    return n - max_len;
}

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        
        int result = min_op_sum(arr, n, s);
        cout << result << endl;
    }
    
    return 0;
}
