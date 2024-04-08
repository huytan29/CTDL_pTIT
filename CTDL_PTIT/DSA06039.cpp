#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, cnt = 0;
		cin >> n;
		int a[n];
		map<int, int> m;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			m[a[i]]++;
		}
		for (int i = 0; i < n; i++)
		{
			if (m[a[i]] > 1)
			{
				cout << a[i] << endl;
				cnt = 1;
				break;
			}
		}
		if (!cnt)
			cout << "NO" << endl;
	}
	return 0;
}