#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    deque<int> max_elm, min_elm;
    int left = 0;
    long long count = 0;

    for (int right = 0; right < n; right++) 
    {
        //deque for the maximum values
        while (!max_elm.empty() && a[max_elm.back()] <= a[right]) 
        {
            max_elm.pop_back();
        }
        max_elm.push_back(right);

        // minimum values
        while (!min_elm.empty() && a[min_elm.back()] >= a[right]) 
        {
            min_elm.pop_back();
        }
        min_elm.push_back(right);

        while (a[max_elm.front()] - a[min_elm.front()] > k) 
        {
            if (max_elm.front() == left) 
            {
                max_elm.pop_front();
            }
            if (min_elm.front() == left) 
            {
                min_elm.pop_front();
            }
            left++;
        }
        count += (right - left + 1);
    }

    cout << count << endl;
    return 0;
}
