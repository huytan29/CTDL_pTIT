#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n, a[100] = {0}, b[100], check[100];
void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << b[a[i]] << " ";
    }
    cout << endl;
}
void Try(int x)
{
    for (int i = 1; i <= n; i++)
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
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    sort(b + 1, b + 1 + n);
    Try(1);
}