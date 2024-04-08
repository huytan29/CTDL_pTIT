#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
       int n,k,cnt;
       cin>>n>>k;
       for(int i = 1; i <= n; i++)
       {
           int x;
           cin>>x;
           if(x==k) cnt=i;
       }
       cout<<cnt<<endl;
    }
    return 0;
}
