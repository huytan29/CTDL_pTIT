#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a[100];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]<a[j]) swap(a[i],a[j]);
        }
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<=i;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}
