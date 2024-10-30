#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> box_size(n);
    
    for (int i = 0; i < n; i++) 
    {
        cin >> box_size[i];
    }
    
    map<int, int> size_count;

    for (int size : box_size) 
    {
        size_count[size]++;
    }

    int min_visible_boxes = 0;
    for (auto& pair : size_count) 
    {
        if (pair.second > min_visible_boxes) 
        {
            min_visible_boxes = pair.second;
        }
    }

    cout << min_visible_boxes << endl;
    return 0;
}
