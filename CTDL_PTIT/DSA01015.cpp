#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int n;
void sloved()
{
    queue<ll> q;
    q.push(9);
    while(q.size())
    {
        ll res=q.front();
        q.pop();
        if(res%n == 0)
        {
             cout<<res<<endl;
             break;
        }
        else
        {
            q.push(res*10);
            q.push(res*10+9);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        sloved();
    }
   
}