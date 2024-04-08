#include <iostream>
using namespace std;
#define endl "\n"
int a[105], n, s;
string res;
void Try(int sum, int i)
{
    if (res == "YES") return;
    if (2 * sum == s)
    {
        res = "YES";
        return;
    }
    for (int j = i; j <= n; j++)
    {
        if (sum + a[j] <= s/ 2)
        Try(sum+a[j], i+1);
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
        s = 0;
        res = "NO";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if (s % 2 == 0)
            Try(0, 1);
        cout << res << endl;
    }
}