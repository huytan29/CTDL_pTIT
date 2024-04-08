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
       int a,b;
       cin>>a>>b;
       int maxa=MAX,minb=MIN;
       for(int i = 0; i < a; i++)
       {
          int x;
          cin>>x;
          maxa=max(maxa,x);
       }
       for(int i = 0; i < b; i++)
       {
           int x;
           cin>>x;
           minb=min(minb,x);
       }
       cout<<(ll)maxa*minb<<endl;
    }
    return 0;
}
