#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+5];
        multiset<int> ms;
        for(int i= 1; i <= n; i++)
        {
            cin>>a[i];
        }
        for(int i= 1; i<=k;i++)
        {
            ms.insert(a[i]);
        }
        for(int i=k+1;i<=n;i++)
        {
            cout<<*ms.rbegin()<< " ";
            ms.erase(ms.find(a[i-k]));
            ms.insert(a[i]);
        }
        cout<<*ms.rbegin()<<endl;
    }
}