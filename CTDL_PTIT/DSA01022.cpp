#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,a[100],b[100],check[100]={0},cnt=1;
bool kt()
{
    int dem=0;
    for(int i=1; i <= n; i++)
    {
        if(a[i]==b[i]) dem++;
    }
    return dem==n;
}
void Try(int x)
{
    for(int i=1;i<=n;i++)
    {
        if(!check[i])
        {
            b[x]=i;
            check[i]=1;
            if(x==n)
            {
                if(!kt()) cnt++;
                else return ;
            }
            else Try(x+1);
            check[i]=0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=1;
        for(int i=1; i <= n; i++)
        {
            check[i]=0;
        }
        for(int i=1; i <= n; i++)
        {
            cin>>a[i];
        }
        Try(1);
         cout<<cnt<<endl;
    }
}