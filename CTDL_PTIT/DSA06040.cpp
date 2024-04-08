#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        long long a[n], b[m], c[k];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        for (int i = 0; i < k; i++)
            cin >> c[i];
        int i = 0, j = 0, h = 0;
        vector<long long> v;
        while(i<n&&j<m&&h<k)
        {
            if(a[i]==b[j]&&a[i]==c[h])
            {
                v.push_back(a[i]);
                i++;j++;h++;
            }
            else if(a[i]>b[j]) j++;
            else if(a[i]>c[h]) h++;
            else i++;
        }
        if (!v.size())
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
}