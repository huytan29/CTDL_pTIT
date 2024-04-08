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
        int n,k,cnt=0,x;
        cin >> n >> k;
        for(int i= 0; i < n; i++)
        {
            cin>>x;
            if(x==k) cnt++;
        }
        if(cnt!=0)
        {
        cout<<cnt<<endl;
        }
        else cout<<"-1"<<endl;

    }
    return 0;
}
