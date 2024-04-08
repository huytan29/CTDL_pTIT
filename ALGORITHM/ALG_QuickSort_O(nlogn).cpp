#include <bits/stdc++.h>
using namespace std;
int partition_lomuto(int a[],int l,int r) 
{
    int pivot =a[r];
    int i=l-1,j=l;
    while(j<r)
    {
        if(a[j]<pivot) 
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    i++;
    swap(a[i],a[r]);
    return i;
}
int partition_hoare(int *a,int l,int r)
{
    int pivot=a[l];
    int i=l,j=r;
    while(1)
    {
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;
        if(i<j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else return j;
    }
}
int partition_mid(int a[],int l,int r)
{
    int pivot=a[(l+r)/2];
    int i=l,j=r;
    while(1)
    {
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;
        if(i<j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else return j;
    }
}
void QuickSortL(int a[],int l,int r)
{
    if(l<r)
    {
        int p= partition_lomuto(a,l,r);
        QuickSortL(a,l,p-1);
        QuickSortL(a,p+1,r);
    }
    return;
}

void QuickSortH(int a[],int l,int r)
{
    if(l<r)
    {
        int p= partition_hoare(a,l,r);
        QuickSortH(a,l,p);
        QuickSortH(a,p+1,r);
    }
    return;
}
void QuickSortM(int a[],int l,int r)
{
    if(l<r)
    {
        int p=partition_mid(a,l,r);
        QuickSortM(a,l,p);
        QuickSortM(a,p+1,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    QuickSortH(a,0,n-1);
    for(int i = 0; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }

}