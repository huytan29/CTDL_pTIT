#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,k,a[100],b[100]={0},cnt=0;
bool check()
{
    for(int i = 1; i < k; i++)
    {
        if(a[b[i]]>a[b[i+1]]) return false;
    }
    return true;
}
void Try(int x)
{
    for(int i = b[x-1]+1; i <=n-k+x; i++)
    {
        b[x]=i;
        if(x==k)
        {
            if(check()) cnt++;
        }
        else Try(x+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i= 1; i <= n; i++)
    {
        cin>>a[i];
    }
    Try(1);
    cout<<cnt<<endl;
}