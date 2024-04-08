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
        int n, a[1000], cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            int index = i, num = a[i];
            for (int j = i + 1; j < n; j++)
            {
                if (num > a[j])
                {
                    num = a[j];
                    index = j;
                }
            }
            if (index != i)
            {
                swap(a[i], a[index]);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}