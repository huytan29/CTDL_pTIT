#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int res(int a[],int n)
{
    int min=INT_MAX;
    for(int i = n-1; i > 0; i--)
    {
        int k=a[i]-a[i-1];
        if(k<min) min=k;
    }
        return min;
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