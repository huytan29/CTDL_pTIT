#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ll long long
ll result(int a[],int n)
{
    priority_queue<int, vector<int>, greater<int>> pq(a, a + n);
        ll res = 0;
        while (pq.size() > 1)
        {
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            res += x + y;
            pq.push(x + y);
        }
    return res;
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
        int a[n];
        for (auto &i : a) cin >> i;
        cout << result(a,n) << endl;
    }
    return 0;
}
