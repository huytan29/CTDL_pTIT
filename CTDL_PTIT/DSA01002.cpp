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
        int n, k;
        cin >> n >> k;
        int a[k]={-1};
        for (int i = 1; i <= k; i++) cin >> a[i];
        int i = k;
        while (a[i] == n - k + i && i > 0) i--;
        a[i]++;
        while(i+1<=k)
        {
            a[i+1]=a[i]+1;
            i++;
        }
        for(int j = 1; j <= k; j++) cout<<a[j]<<" ";
        cout<<endl;
    }
    return 0;
}