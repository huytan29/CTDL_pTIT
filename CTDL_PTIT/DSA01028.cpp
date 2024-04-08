#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,k,a[1000]={0},b[1000];
void in()
{
    for(int i=1;i<=k;i++)
    {
        cout<<b[a[i]]<<" ";
    }
    cout<<endl;
}
void Try(int x)
{
    for(int i=a[x-1]+1;i<=n-k+x;i++)
    {
        a[x]=i;
        if(x==k) in();
        else Try(x + 1);
    }
}
int main()
{
    cin>>n>>k;
    set<int> s;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    n=s.size();
    int i=1;
    for(int x:s)
    {
         b[i]=x;
         i++;
    }
    Try(1);
}