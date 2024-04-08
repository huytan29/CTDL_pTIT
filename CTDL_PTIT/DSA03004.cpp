#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
long long res(int a[],int n)
{
    string x,y;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) x+=to_string(a[i]);
        else y+=to_string(a[i]);
    }
    return stoll(x)+stoll(y);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<res(a,n)<<endl;
    }
}