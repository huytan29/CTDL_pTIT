#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        long long res=0,sum=0;
        cin>> n >> k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+= a[i];
        }
        sort(a,a+n);
        if(k>n/2) k=n-k;
        for(int i=0;i<k;i++)
        {
            res+=a[i];
        }
        cout<<sum-2*res<<endl;

    }
}