#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int start = 0;
    long long curr_sum = 0;
    long long count = 0;

    for (int end = 0; end < n; end++) 
    {
        curr_sum += a[end];

        while (curr_sum > s) 
        {
            curr_sum -= a[start];
            ++start;
        }

        // all subarrays from `start` to `end` are valid
        count += (end - start + 1);
    }

    cout << count << endl;
    return 0;
}
