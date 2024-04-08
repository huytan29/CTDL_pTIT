#include <bits/stdc++.h> 
#define endl "\n"
using namespace std;
int n,a[100],check[100]={0};
void in()
{
    for(int i=1;i<=n;i++)
    {
        cout<<char(a[i]+'A');
    }
    cout<<" ";
}
void sinh(int x)
{
    for(int i=0;i<=1;i++)
    {
            a[x]=i;
            if(x==n) in();
            else sinh(x+1);
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