#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int i=a.size()-1;
        while(i>0&&a[i]=='0')
        {
            a[i]='1';
            i--;
        }
        if(i==0)
        {
            int k=a.size();
            while(k--)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else
        {
        a[i]='0';
        cout<<a<<endl;
        }
    }
    return 0;
}