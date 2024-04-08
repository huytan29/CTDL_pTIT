#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a < b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n, a[1000];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        int l = 0, r = n - 1;
        while (r > l)
        {
            cout << a[r] << " " << a[l] << " ";
            l++;
            r--;
        }
        if (l == r)
            cout << a[l];
        cout << endl;
    }
}