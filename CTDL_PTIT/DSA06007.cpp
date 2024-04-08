#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int l=0,r=n-1;
        while(a[l]==b[l]&&l<n-1)
        {
            l++;
        }
        while(a[r]==b[r]&&r>0)
        {
            r--;
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
    return 0;
}