#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int n,k,s,su=0,a[100],cnt=0;
void Try(int x)
{
    for(int i=a[x-1]+1; i <=n-k+x; i++)
    {
        a[x]=i;
        su+=a[x];
        if(x==k)
        {
            if(su==s) cnt++;
        }
        else Try(x+1);
        su-=a[x];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(1)
    {
        cin>>n>>k>>s;
        if(!n&&!k&&!s) return 0;
        Try(1);
        cout<<cnt<<endl;
        su=0;cnt=0;
    }
    
}