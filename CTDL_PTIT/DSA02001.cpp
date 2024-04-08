#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int a[20][20],n;
void dequy(int i)
{
    if (i == 0)
        return;
    else
    {
        cout << "[";
        for (int j = 1; j < i; ++j)
            cout << a[i][j] << " ";
        cout << a[i][i] << "]" << endl;
        for (int j = 1; j < i; ++j)
        {
            a[i - 1][j] = a[i][j] + a[i][j + 1];
        }
        dequy(i - 1);
    }
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
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[n][i];
        }
        dequy(n);
    }
}