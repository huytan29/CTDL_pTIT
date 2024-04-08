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
       int n;
       cin>>n;
       multiset<int> s;
       for(int i = 0; i < n; i++)
       {
           int x;
           cin>>x;
           s.insert(x);
       }
       int m1=*s.begin(),m2=*++s.begin();
       if(m1!=m2)
       cout<<m1<<" "<<m2<<endl;
       else cout<<"-1"<<endl;
    }
    return 0;
}
