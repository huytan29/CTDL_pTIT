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
        pair<int, int> b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i].first = abs(a[i] - k);
            b[i].second = i;
        }
        sort(b,b+n);
        for (int i = 0; i < n; i++)
            cout << a[b[i].second]<< " ";
        cout << endl;
    }
}