#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,a[100],check[100];
bool kt()
{
    for (int i = 2; i <n ; i++)
        if ((a[i] == 1 || a[i] == 5) && (a[i - 1] != 1 && a[i - 1] != 5) && (a[i + 1] != 1 && a[i + 1] != 5))
            return false;
    return true;
}
void in()
{
    if(kt())
    {
    for(int i=1;i<=n;i++)
    {
        cout<<char(a[i]+'A'-1);
    }
    cout<<endl;
    }
}
void Try(int i)
{
    for(int j=1; j <= n; j++)
    {
        if(!check[j])
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
    char a[0];
    cin>>a;
    n=a[0]-'A'+1;

    Try(1);
}