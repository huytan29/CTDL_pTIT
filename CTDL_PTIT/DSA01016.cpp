#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n, a[15];
void in(int k)
{
    cout << "(";
    for (int i = 1; i < k; i++)
    {
        cout << a[i] << " ";
    }
    cout <<a[k] <<") ";
}
void Try(int i,int k,int s)
{
      for(int j=k;j>=1;j--)
      {
          if(n>=s+j)
          {
              a[i]=j;
              s+=j;
              if(s==n) in(i);
              else Try(i+1,j,s);
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
        Try(1,n,0);
        cout<<endl;
    }
    return 0;
}