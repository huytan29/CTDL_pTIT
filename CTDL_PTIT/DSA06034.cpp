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
		int n, k;
		cin >> n >> k;
		int a[n];
		long long s = 0;
		map<int, long long> m;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			m[a[i]]++;
		}
		for (int i=0; i < n; i++)
		{
			s+=m[k-a[i]];
            if(k-a[i]==a[i]) s--;
		}
		cout << s / 2 << endl;
	}
}