#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,k,a[100],b[100]={0};
void in()
{
    for(int i=1;i<=k; i++) cout<<a[b[i]]<<" ";
    cout<<endl;
}
void Try(int i)
{
    for(int j= b[i-1]+1; j <= n - k + i; j++)
    {
        b[i]=j;
        if(i==k) in();
        else Try(i + 1);
    }
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
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+n);
        Try(1);
    }
}