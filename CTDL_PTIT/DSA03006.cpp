#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        string res="";
        for(int i=0; i < n; i++)
        {
            cin >>a[i];
            b[i]=a[i];
        }       
        sort(b,b+n);
        for(int i = 0; i < n; i++)
        {
            if(a[i]!=b[i]&&a[i]!=b[n-i-1])
            {
                res="No";
                break;
            }
        }
        if(res=="") res="Yes";
        cout<<res<<endl;
    }
}