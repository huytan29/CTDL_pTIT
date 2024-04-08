#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s.insert(x);
        }
       for(int x:s)cout<<x<<" ";
        cout << endl;
    }
}