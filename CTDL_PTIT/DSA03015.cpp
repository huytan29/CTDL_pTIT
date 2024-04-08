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
        int n,s,m;
        cin>>n>>s>>m;
        int need=s*m,res=0,kq=-1;
        if(n<m||6*n<7*m) kq=-1;
        else
        {
        for(int i = 1; i <= s; i++)
        {
            if(i%7!=0)
            {
                res++;
                if(res*n>=need)
                {
                    kq=res;
                    break;
                }
            }
        }
        }
        cout<<kq<<endl;

    }
    return 0;
}