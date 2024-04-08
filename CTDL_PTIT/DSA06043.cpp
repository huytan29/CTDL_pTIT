#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int xuly(int a[], int n, int &sum)
{
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        if (sum1 == sum)
            return i + 1;
        sum1 += a[i];
    }
    return -1;
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
        int n, sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        cout << xuly(a, n, sum) << endl;
    }
}