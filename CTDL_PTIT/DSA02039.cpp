#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n, a[15];
int s=0;
vector<string> res;
void in(int k)
{
    string s;
    for (int i = 1; i < k; i++)
    {
        s+=to_string(a[i])+ " ";
    }
    s+=to_string(a[k]);
    res.push_back(s);
}
void sloved()
{   
    cout<< res.size()<<endl;
    for(string x:res) cout<<"("<<x<<") ";
    cout<<endl;
}
void Try(int i,int k)
{
      for(int j=k;j>=1;j--)
      {
          if(n>=s+j)
          {
              a[i]=j;
              s+=j;
              if(s==n) in(i);
              else Try(i+1,j);
              s-=j;
          }
      }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        s=0;res.clear();
        Try(1,n);
        sloved();
    }
    return 0;
}