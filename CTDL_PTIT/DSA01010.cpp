#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k];
        set<int> s;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int i = k;
        a[0] = -1;
        while (i >= 0 && a[i] == n - k + i)
        {
            i--;
        }
        if (i == 0)
        {
            cout << k << endl;
        }
        else
        {
            a[i]++;
            i++;
            while (i <= k)
            {
                a[i] = a[i - 1] + 1;
                i++;
            }
            for (int i = 1; i <= k; i++)
            {
                s.insert(a[i]);
            }
            cout << s.size() - k << endl;
        }
    }
}