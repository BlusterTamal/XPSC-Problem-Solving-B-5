# include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;

	vector<char> v;
	reverse(s.begin(), s.end());
	int b = 0, B = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		char c = s[i];
		if (c == 'b')
		{
			++b;
			continue;
		}
		if (c == 'B')
		{
			++B;
			continue;
		}
		if (B && isupper(c))
		{
			--B;
			continue;
		}
		if (b && islower(c))
		{
			--b;
			continue;
		}
		v.push_back(c);
	}
	reverse(v.begin(), v.end());
	for (auto e: v)
    {
        cout << e;
    }
    cout << '\n';
}
 
int main()
{
	int t;
	cin >> t;
	while (t--)
    {
        solve();
    }
	return 0;
}