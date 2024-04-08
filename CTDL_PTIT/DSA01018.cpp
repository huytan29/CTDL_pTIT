#include<iostream>
#include<iomanip>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k,a[1000];
        cin >> n >> k;
        for (int i = 1; i <= k; i++) cin >> a[i];
        int i = k;
        while (i > 1 && a[i] -a[i-1]==1) i--;
        if (i == 1&&a[i]!=n-k+i) for (int j = 1; j <= k; j++) a[j]=n-k+j;
        else
        {
            a[i]--;
            for (int j = k; j > i; j--) a[j] = n - k + j;
        }
        for (int j = 1; j <= k; j++) cout << a[j] << " ";
        cout << endl;
    }
}