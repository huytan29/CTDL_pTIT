#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,k,a[20][20];
int dequy(int i, int j)
{
    if (i == 1 || j == 1)
    {
        return 1;
    }
    return dequy(i-1,j)+dequy(i,j-1);
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
        cin >> n>>k;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                cin >> a[i][j];
            }
        }
        cout <<dequy(n,k)<< endl;
    }
}