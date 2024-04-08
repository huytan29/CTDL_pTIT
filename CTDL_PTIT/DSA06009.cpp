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
        int n,k;
        cin>>n>>k;
        int cnt=0,a[n];
        for(int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        for(int i = 0; i < n-1; i++)
        {
            int key=k-a[i];
            for(int j=i+1;j<n;j++)
            {
                if(key==a[j]) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
