#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int a[100], n, k;
vector<string> v;
void in()
{
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout << endl;
}
bool check()
{
    int cnt = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            res++;
        else
            res = 0;
        if (res > k)
            return false;
        else if (res == k)
            cnt++;
    }
    return cnt == 1;
}
void Try(int x)
{
    for (int i = 0; i <= 1; i++)
    {
        a[x] = i;
        if (x == n-1)
        {
            if(check())
            {
                string s="";
                for(int i = 0; i < n; i++)
                {
                    if(a[i]==0) s+="A";
                    else s+="B";
                }
                v.push_back(s);
            }
        }
        else
            Try(x + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    Try(0);
    in();
    return 0;
}