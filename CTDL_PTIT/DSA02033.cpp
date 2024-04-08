#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, a[100], check[100]={0};
bool kt()
{
    map<int,int> m;
    for(int i=1; i <= n; i++)
    {
        if(i<n&&abs(a[i]-a[i+1])==1) return false;
        m[a[i]]++;
        if(m[a[i]]>1) return false;
    }
    return true;
}
void in()
{
    if (kt())
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!check[j])
        {
            a[i]=j;
            check[j]=1;
            if(i==n) in();
            else Try(i + 1);
            check[j]=0;
        }
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
        cin>>n;
        Try(1);
    }
}