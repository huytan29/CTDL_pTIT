#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long minNum(string a,string b)
{
    for(int i=0; i < a.size(); i++)
    {
        if(a[i]=='6') a[i]='5';
    }
    for(int i=0; i < b.size(); i++)
    {
        if(b[i]=='6') b[i]='5';
    }
    return stoi(a)+stoi(b);
}
long long maxNum(string a,string b)
{
    for(int i=0; i < a.size(); i++)
    {
        if(a[i]=='5') a[i]='6';
    }
    for(int i=0; i < b.size(); i++)
    {
        if(b[i]=='5') b[i]='6';
    }
    return stoi(a)+stoi(b);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin>>a>>b;
    cout<<minNum(a,b)<<" "<<maxNum(a,b);
}