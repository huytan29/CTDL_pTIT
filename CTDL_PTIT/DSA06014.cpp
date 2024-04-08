#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int check(int n)
{
    if(n<2) return 0;
    if(n<=3) return 1;
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
       int n,k=0;
       cin>>n;
       for(int i = 2; i <= n/2; i++)
       {
           if(check(i)&&check(n-i)) 
           {
               cout<<i<<" "<<n-i<<endl;
               k=1;
               break;
           }
       }
       if(!k) cout<<"-1"<<endl;
    }
    return 0;
}
