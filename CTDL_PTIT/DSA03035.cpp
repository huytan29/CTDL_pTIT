#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int cnt=0,maxx=INT_MIN;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i]<a[i+1]) cnt++;
        else cnt=0;
        maxx=max(maxx,cnt);
    }
    cout<<n-maxx-1<<endl;
    return 0;
}
