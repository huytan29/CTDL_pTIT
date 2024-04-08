#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int n,a[1000]={0},stop=0;
void sinh()
{
    int i=n-1;
    while(i>=0&&a[i]==1)
    {
        a[i]=0;
        i--;
    }
    if(i<0)
    {
        stop=1;
    }
    else a[i]=1;
}
bool check(int a[])
{
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1]) return false;
    }
        return true;
}
void in()
{
    if(check(a))
    {
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< "   ";
    }
    cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    while(stop==0)
    {
        in();
        sinh();
    }
    return 0;
}
