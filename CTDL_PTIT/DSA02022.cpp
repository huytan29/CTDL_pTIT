#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int a[5];
bool check()
{
    if(a[1]==0&&a[2]==0) return false;
    return true;
}
void in()
{
    if(check())
    {
        for(int i=1; i <= 5; i++)
        {
            if(i==3) cout<<"/02/2";
            if(a[i]==1) cout<<"2";
            else cout<<"0";
        }
        cout<<endl;
    }
}
void xuly(int x)
{
    for(int i=0;i<=1; i++)
    {
        a[x]=i;
        if(x==5) in();
        else xuly(x+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    xuly(1);
}