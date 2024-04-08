#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int idx=0;
        while(a[idx]<a[idx+1])
        {
             idx++;
            if(idx==n-1)
            {
                idx=-1 ;break;
            }
        }
        cout<<idx+1<<endl;
    }
}