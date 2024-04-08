#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int a[100],b[100][100],res=0,k, n, check[100]={0};
int v[100][100];
void result()
{
    int  sum=0;
    for(int i=1; i <= n;i++)
    {
        sum+=b[i][a[i]];
    }
    if(sum==k) 
    {
        res++;
        for(int j = 1; j <= n; j++)
            v[res][j]=a[j];
    }
}
void Try(int x)
{
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            a[x] = i;
            check[i]=1;
            if (x == n)
                result();
            else
                Try(x + 1);
            check[i]=0;
        }
    }
}
    
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>>b[i][j];
        }
    }
    Try(1);
    cout<<res<<endl;
    for(int i=1;i<=res;i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    } 
}