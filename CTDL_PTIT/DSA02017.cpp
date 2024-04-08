#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,x[100],cot[100],xuoi[100],nguoc[100],a[10][10],sum=0,kq;
void Try(int i)
{
    for(int j=1; j <= n; j++)
    {
        if(!cot[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1])
        {
            x[i]=j;
            sum+=a[i][j];
            cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=1;
            if(i==n) kq=max(kq,sum);
            else Try(i + 1);
            cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=0;
            sum-=a[i][j];
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        n = 8;
        kq=INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n; i++) {cot[i]=xuoi[i]=nguoc[i]=0;}
        Try(1);
        cout<<kq<<endl;
    }
}