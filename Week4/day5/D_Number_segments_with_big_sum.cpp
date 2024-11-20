#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    long long s;
    cin >> n >> s;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    long long curr_sum = 0; 
    int left = 0;       
    long long count = 0;

    for (int right = 0; right < n; right++) 
    {
        curr_sum += a[right];

        // adjust the left pointer until the segment's sum is less than s
        while (curr_sum >= s) 
        {
            count += (n - right);
            curr_sum -= a[left]; // Shrink the window by removing the leftmost element
            left++;
        }
    }
    
    cout << count << endl;
    return 0;
}
