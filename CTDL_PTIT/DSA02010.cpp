#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int a[25], c[25], x, n, ok;
void in(int m)
{
    cout<<"[";
    for(int i=1;i<m; i++) cout<<c[i]<<" ";
    cout<<c[m]<<"]";
}
void quaylui(int i, int s)
{
    for (int j = 1; j <= n; j++)
    {
        if (a[j] >= c[i - 1] && s + a[j] <= x)
        {
            c[i] = a[j];
            s += a[j];
            if (s == x)
            {
                ok = 1;
                in(i);
            }
            else quaylui(i+1,s);
            s-=a[j];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        c[0] = 0;
        ok = 0;
        quaylui(1, 0);
        if (ok == 0)
            cout << -1;
        cout << endl;
    }
}