#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int> p[1001];
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            p[i] = {a[i], b[i]};
        sort(p, p + n, cmp);
        int res = 0, tmp = 1;
        for (int i = 0; i < n; i++)
        {
            if (p[i].first > p[tmp].second)
                res++;
            tmp = i;
        }
    }
    return 0;
}