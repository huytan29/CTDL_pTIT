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
        string s;
        cin>>s;
        int b[26],maxx=INT_MIN;
        int n=s.size();
        for(int i=0;i<26;i++) b[i]=0;
        for(int i = 0; i < n; i++)
        {
            maxx=max(maxx,++b[s[i]-'a']);
        }
        if(n-2*maxx+1>=0) cout<<1;
        else cout<<-1;
        cout<<endl;   
    }
    return 0;
}