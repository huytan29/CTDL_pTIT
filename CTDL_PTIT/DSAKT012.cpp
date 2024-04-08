#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, a[35], s, kq;
void quaylui(int i, int t, int x)
{
    if (t > s || x > kq)
        return;
    if (i == n)
    {
        if (t == s)
            kq = min(kq, x);
        return;
    }
    quaylui(i + 1, t, x);
    quaylui(i + 1, t + a[i], x + 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    kq = 1000;
    quaylui(0, 0, 0);
    if(kq==1000) cout<<-1;
    else cout<<kq;
    cout<<endl;
    }
    return 0;
}