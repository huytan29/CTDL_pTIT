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
        string s;
        cin>>s;
        int i = s.size()-1;
        while (s[i] == '1' && i >=0)
        {
            s[i] = '0';
            i--;
        }
        if(i!=-1)
        s[i] = '1';
        cout<<s<<endl;
    }
}