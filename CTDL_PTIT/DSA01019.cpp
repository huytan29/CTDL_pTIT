#include<bits/stdc++.h>
using namespace std;
int n,a[100],stop=0;
bool check()
{
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] == 1 && a[i] == a[i + 1])
            return false;
    }
    return true;
}
void ktao()
{
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        a[i]=0;
    } 
}
void in()
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1) cout<<"H";
        else cout<<"A";
    }
    cout<<endl;
}
void sinh()
{
    int i=n-1;
    while(i>0&&a[i]==1)
    {
        a[i]=0;
        i--;
    }
    if(i<=2) stop=1;
    else a[i]=1;
    
}
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ktao();
        while(stop==0)
        {
            if(check()) in();
            sinh();
        }
        stop=0;
    }
    return 0;
}