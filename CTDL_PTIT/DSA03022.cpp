#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,res;
    cin>> n;
    int a[n];
    for(int i = 1; i <= n; i++)cin>>a[i];   
    sort(a+1,a+n+1);
    res=max(a[1]*a[2],max(a[n]*a[n-1],max(a[n]*a[n-1]*a[n-2],a[1]*a[2]*a[n])));
    cout<<res<<endl;
    return 0;
}