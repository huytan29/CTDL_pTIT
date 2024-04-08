#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
bool cmp(pair<int,int> a , pair<int,int> b)
{
    if(a.second>b.second) return true;
    if(a.second==b.second&&a.first<b.first) return true;
    return false;
}
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
       map<int,int> m;
       pair<int,int> p[1000];
       for(int i = 0; i < n; i++)
       {
          int x;
          cin>>x;
          m[x]++;
       }
       int i=0;
       for(auto x : m)
       {
           p[i++]=x;
           i++;
       }
       sort(p,p+n,cmp);
       for(int j = 0; j < i-1; j++)
       {
           while(p[j].second!=0)
           {
           cout<<p[j].first<<" ";
           p[j].second--;
           }
       }
       cout<<endl;
    }
    return 0;
}
