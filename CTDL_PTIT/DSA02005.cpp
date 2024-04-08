#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n, a[100], check[100];
string s;
void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << s[a[i]];
    }
    cout << " ";
}
void Try(int x)
{
    for (int i = 0; i < n; i++)
    {
        if (!check[i])
        {
            a[x] = i;
            check[i] = 1;
            if (x == n)
                in();
            else
                Try(x + 1);
            check[i] = 0;
        }
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
        cin >> s;
        n = s.size();
        Try(1);
        cout << endl;
    }
}