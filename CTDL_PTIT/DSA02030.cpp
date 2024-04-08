#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
char a[0];
int n, B[100], k;
void in()
{
        for (int i = 1; i <= n; i++)
        {
            cout << char(B[i] + 'A');
        }
        cout << endl;
    
}
void Try(int x)
{
    for (int i = B[x-1]; i <= k; i++)
    {
        B[x] = i;
        if (x == n)
            in();
        else
            Try(x + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> n;
    k = a[0] - 'A';
    Try(1);
}