#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,a[100]={0};
bool check()
{
    int cnt = 0, dem = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (a[1]==0||a[n]==1||a[i] == 1 && a[i-1] == 1) return false;
        if (a[i] == 0) cnt++;
        else cnt = 0;
        if(cnt>3) return false;
    }
    return true;
}
void in()
{
    if (check())
    {
        for (int i = 1; i <= n; ++i)
        {
            if (!a[i])
                cout << "6";
            else
                cout << "8";
        }
        cout<<endl;
    }
}
void Try(int x)
{
    for (int i = 0; i <= 1; ++i)
    {
        a[x] = i;
        if (x == n) in();
        else Try(x + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    Try(1);
}