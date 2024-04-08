#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,cnt=0;
        cin >> n;
        int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        for (int i = 9; i >= 0; --i)
        {
            if(n==0) break;
            if (a[i] <= n)
            {
                cnt +=n / a[i];
                n=n%a[i];
            }
        }
        cout<<cnt<<endl;
    }
}