#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    vector<int> c, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end(), cmp);
    int ptr1 = 0, ptr2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            cout << b[ptr1++] << " ";
        else
            cout << c[ptr2++] << " ";
    }
    return 0;
}