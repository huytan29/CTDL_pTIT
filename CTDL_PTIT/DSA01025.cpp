#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int a[1000],n,k;
void in()
{
    for(int i=1;i<=k;i++)
    {
        cout<<char(a[i]+'A'-1);
    }
    cout<<endl;
}
void Try(int i)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(1);
    }
    return 0;
}