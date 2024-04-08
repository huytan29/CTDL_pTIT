#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int n,cnt,x[100],cot[100],xuoi[100],nguoc[100];
void Try(int i)
{
    for(int j=1; j <= n; j++)
    {
        if(!cot[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1])
        {
            x[i]=j;
            cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=1;
            if(i==n) cnt++;
            else Try(i + 1);
            cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        cin >>n;
        for(int i = 1; i <= n; i++) {cot[i]=xuoi[i]=nguoc[i]=0;}
        cnt=0;
        Try(1);
        cout<<cnt<<endl;
    }
}