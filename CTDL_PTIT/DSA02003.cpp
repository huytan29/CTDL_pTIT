#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string s;
int n, a[20][20], kt = 0;
void dequy(int i, int j, int m)
{
    if (i == n && j == n)
    {
        kt = 1;
        for (int i = 0; i < m; i++)
            cout << s[i];
        cout << " ";
        return;
    }
    if (a[i + 1][j] == 1)
    {
        s[m] = 'D';
        dequy(i + 1, j, m + 1);
    }
    if (a[i][j + 1] == 1)
    {
        s[m] = 'R';
        dequy(i, j + 1, m + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        s = "";
        kt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        if (a[1][1] == 0)
        {
            cout << -1;
        }
        else 
        {
            dequy(1, 1, 0);
            if (!kt)
                cout << -1;
        }
        cout << endl;
    }
}