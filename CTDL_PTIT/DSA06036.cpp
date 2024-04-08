#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(binary_search(a+j+1,a+n,k-a[i]-a[j]))
                {
                    cout<<"YES"<<endl;
                    cnt=1;
                    break;
                }
            }
            if(cnt==1) break;
        }
        if(!cnt) cout<<"NO"<<endl;
    }
}