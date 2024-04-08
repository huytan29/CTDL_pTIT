#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k,cnt=1;
        cin >> n >> k;
        int a[k+1];
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        while (true)
        {
            
            int i = k;
            while (i > 1 && a[i] - a[i-1] == 1)
            {
                i--;
            }
            if (a[i]==1&&i==1) break;
            else
            {
                a[i]--;
                for (int j = k; j > i; j--)
                    a[j] = n - k + j;
            cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}