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
       int n,k;
       cin>>n>>k;
       set<int> s;
       for(int i=0; i < n; i++)
       {
           int x;
           cin>>x;
           s.insert(x);
       }
       if(s.count(k)) cout<<"1"<<endl;
       else cout<<"-1"<<endl;

    }
    return 0;
}
