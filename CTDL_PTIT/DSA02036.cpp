#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,a[100];
vector<int> num;
vector<vector<int> >res;
bool cmp(int a, int b)
{
    return a>b;
}
void Try(int sum,int i)
{
    for(int j=i+1;j<=n;j++)
    {
        num.push_back(a[j]);
        sum+=a[j];
        if(sum%2==1)
        {
            res.push_back(num);
        }
        Try(sum,j);
        sum-=a[j];
        num.pop_back();
    }
}
void sloved()
{
    for(int i=0; i < res.size(); i++)
    {
        for(auto x:res[i]) cout<<x<<" ";
        cout<< endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        res.clear();
        num.clear();
        for(int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+ 1 + n,cmp);
        Try(0,0);
        sort(res.begin(), res.end());
        sloved();
    }
}