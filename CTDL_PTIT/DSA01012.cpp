#include <bits/stdc++.h>
#define endl "\n"
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
        int n;
        cin >> n;
        vector<string> a;
        a.push_back("0");
        a.push_back("1");
        int sq = pow(2, n);
        int i = 2;
        while (i < sq)
        {
            for (int j = i - 1; j >= 0; j--)
                a.push_back(a[j]);
            for (int j = 0; j < i; j++)
                a[j] = "0" + a[j];
            for (int j = i; j < 2 * i; j++)
                a[j] = "1" + a[j];
            i *= 2;
        }
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}