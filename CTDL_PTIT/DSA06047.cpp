#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] *= a[i];
        }
        sort(a, a + n);
        for (int i = n - 2; i >= 2; i--)
        {
            int l = 0, r = i - 1;
            while (l < r)
            {
                if (a[l] + a[r] == a[i])
                {
                    cout << "YES" << endl;
                    cnt = 1;
                    break;
                }
                (a[l] + a[r] < a[i]) ? l++ : r--;
            }
            if (cnt == 1)
                break;
        }
        if (!cnt)
            cout << "NO" << endl;
    }
}