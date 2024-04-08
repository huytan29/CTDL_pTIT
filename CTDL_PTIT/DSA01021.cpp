#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[1000]={-1};
        set<int> s;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int i = k;
        while (i > 0 && a[i] == n - k + i)
        {
            i--;
        }
        if (i ==0)
            cout << k << endl;
        else
        {
            a[i]++;
            while (i < k)
            {
                a[i + 1] = a[i] + 1;
                i++;
            }
            for (int i = 1; i <= k; i++)
            {
                s.insert(a[i]);
            }
            cout << s.size()- k << endl;
        }
    }
    return 0;
}