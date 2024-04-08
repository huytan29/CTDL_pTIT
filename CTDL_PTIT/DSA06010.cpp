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
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            while(x!=0)
            {
                s.insert(x%10);
                x/=10;
            }
        }
        for(int x:s) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
