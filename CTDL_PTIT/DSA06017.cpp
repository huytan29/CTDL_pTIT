#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define MAX -1e9
#define MIN 1e9
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
       int n,m;
       cin>>n>>m;
       int a[n],b[m],c[m+n];
       for(int i = 0; i < n; i++)
       {
           cin>>a[i];
       }
       for(int i = 0; i < n ; i++)
       {
           cin>>b[i];
       }
       sort(b,b+n);
       sort(a,a+n);
       int i=0,j=0,cnt=0;
       while(i<n&&j<m)   
       {
           if(a[i]<=b[j]) 
           {
               c[cnt++]=a[i];
               i++;
           }
           else
           {
               c[cnt++]=b[j];
               j++;
           }
       }
       while(i<n)
       {
           c[cnt++]=a[i++];
       }
       while(j<m)
       {
           c[cnt++]=b[j++];
       }
    for(int i = 0; i < n+m ; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
