#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>> t;
    while (t--)
    {
        int k;
        cin>>k;
        string a;
        cin>>a;
        int n=a.size();
        int i=n-2;
        while(i>=0&&a[i]>=a[i+1])
        {
            i--;
        }
        if(i==-1) cout<<k<<" "<<"BIGGEST"<<endl;
        else{
        int x=n-1;
        while(x>=0&&a[x]<=a[i])
        {
            x--;
        }
        swap(a[i],a[x]);
        int l=i+1,r=n-1;
        while(l<r)
        {
            swap(a[l],a[r]);
            l++;r--;
        }
        cout<<k<<" "<<a<<endl;
        }
    }
    return 0;
}