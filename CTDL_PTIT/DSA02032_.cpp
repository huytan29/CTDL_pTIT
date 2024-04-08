#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,k,a[100],b[100],sum;
vector<string> res;
void in(int x)
{
    string s;
    for(int i=1;i<x;i++) 
    { 
        s+=to_string(b[i])+" ";
    }
    s+=to_string(b[x]);
    res.push_back(s);
}
void sloved()
{
    cout<<res.size()<<" ";
    for(string x:res) cout<<"{"<<x<<"} ";
}
void Try(int i,int pos)
{
    for(int j=pos;j<=n;j++)
    {
        if(sum+a[j]<=k)
        {
            b[i]=a[j];
            sum+=a[j];
            if(sum==k) in(i);
            else Try(i+1,j);
            sum-=a[j];
        }
    }
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        cin>>n>>k;
        sum=0;
        res.clear();
        for(int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        Try(1,1);
        if(!res.size()) cout<<-1;
        else sloved();
        cout<<endl;
    }
}