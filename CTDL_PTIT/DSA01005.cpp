#include <bits/stdc++.h> 
#define endl "\n"
using namespace std;
int n,a[100],check[100]={0};
void in()
{
    for(int i=1;i<=n;i++)
    {
        cout<<a[i];
    }
    cout<<" ";
}
void sinh(int x)
{
    for(int i = 1; i <= n; i++)
    {
        if(check[i]==0)
        {
            a[x]=i;
            check[i]=1;
            if(x==n) in();
            else sinh(i+1);
            check[i]=0;
        }
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
        cin>>n;
        sinh(1);
        cout<<endl;
	}
}