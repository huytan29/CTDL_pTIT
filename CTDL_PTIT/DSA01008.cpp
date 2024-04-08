#include <bits/stdc++.h> 
#define endl "\n"
using namespace std;
int n,k,a[1000],sum=0;
void in()
{
    for(int i=1;i<=n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}
void sinh(int x)
{
    for(int i=0;i<=1;i++)
    {
            a[x]=i;
            sum+=i;
            if(x==n&&sum==k) in();
            else if(x<n) sinh(x+1);
            sum-=i;
    }
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
        cin>>n>>k;
        sinh(1);
	}
}