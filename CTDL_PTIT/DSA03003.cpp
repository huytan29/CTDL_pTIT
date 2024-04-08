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
        int n;
        cin>>n;
        int a[n];
        long long maxn=0; 
        for(int i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        sort(a,a+n);
        for(int i = 0; i < n; i++)
        {
            maxn=(maxn+a[i]*i)%MOD;
        }
        cout<<maxn<<endl;
    }
}