#include<bits/stdc++.h>
using namespace std;
int n,k,b[100],a[100],cnt=0;
void nhap()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
}
void in(vector<int> s)
{
    for(int x:s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
void result()
{
    vector <int> s;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1) 
        {
            sum+=b[i];
            s.push_back(b[i]);
        }
    }
        if(sum==k) 
        {
            in(s);
            cnt++;
        }
}
void sinh(int x)
{
    for(int i=0;i<=1;i++)
    {
        a[x]=i;
        if(x==n) result();
        else sinh(x+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    nhap();
    sinh(1);
    cout<<cnt;
    return 0;
}