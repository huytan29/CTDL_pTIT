#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,s,a[100],b[100],sum=0,ok=0;
vector<int> v;
void in()
{
    ok=1;
    int c[100],j=1;
    for(int i=1;i<=n;i++)
    {
        if(b[i]==0) c[j++]=a[i];
    }
    cout<<"[";
    for(int i=1;i<j-1;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<c[j-1]<<"] ";
        
}
void Try(int x)
{
    for(int i=0;i<=1;i++)
    {
        b[x]=i;
        if(i==0) sum+=a[x];
        if(x==n)
        {
           if(sum==s)
             in();
        }
        else Try(x+1);
        if(i==0) sum-=a[x];
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
        cin>> n >> s;
        ok=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        Try(1);
        if(!ok) cout<<-1;
        cout<<endl;
    }
}