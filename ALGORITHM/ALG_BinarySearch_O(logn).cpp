#include <bits/stdc++.h>
using namespace std;
int binary_search(int *a,int l,int r, int x)
{
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(a[mid]==x) return mid;
    else if(a[mid]>x) return binary_search(a,l,mid,x);
    else return binary_search(a,mid+1,r,x);
}
int ternary_search(int *a,int l,int r,int x)
{
    if(l>r) return -1;
    int mid1= l+(r+l)/3;
    int mid2=l+2*(l+r)/3;
    if(x==a[mid1]) return mid1;
    else if(x==a[mid2]) return mid2;
    else if(x<a[mid1]) return ternary_search(a,l,mid1,x);
    else if(x>a[mid2]) return ternary_search(a,mid2,r,x);
    return ternary_search(a,mid1,mid2,x);
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Vi tri cua "<<x<<": "<<binary_search(a,0,n-1,x)<<endl;
    cout<<"Vi tri cua "<<x<<": "<<ternary_search(a,0,n-1,x)<<endl;
    
}