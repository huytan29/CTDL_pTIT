#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        for (auto x : m)
            cout << x.first << " ";
        cout << endl;
        for (auto x : m)
            if (x.second > 1)
                cout << x.first << " ";
        cout << endl;
    }
    return 0;
}