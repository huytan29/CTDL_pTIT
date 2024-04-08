#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,a[25];
vector<int> tmp;
set<string> res;
void xuly()
{
    string s;
    for (int i = 0; i <tmp.size(); i++)
    {
        s+=to_string(tmp[i])+" ";
    }
    res.insert(s);
}
void in()
{
    for(string x:res) cout<<x<<endl;
    res.clear();
}
void Try(int i)
{
    for (int j = i; j <= n; j++)
    {
        if (tmp.empty() || a[j] > tmp[tmp.size() - 1])
        {
            tmp.push_back(a[j]);
            if (tmp.size() > 1) xuly();
            Try(j + 1);
            tmp.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(1);
    in();
}
