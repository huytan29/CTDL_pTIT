#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void merge(int a[], int l, int m, int r)
{
    int n = m - l + 1, k = r - m;
    int al[n], ar[k];
    for (int i = 0; i < n; i++)
        al[i] = a[l + i];
    for (int i = 0; i < k; i++)
        ar[i] = a[m + 1 + i];
    int i = 0, j = 0;
    while (i < n && j < k)
    {
        if (al[i] <= ar[j])
        {
            a[l] = al[i];
            i++;
            l++;
        }
        else
        {
            a[l] = ar[j];
            j++;
            l++;
        }
    }
    while (i < n)
    {
        a[l] = al[i];
        i++;
        l++;
    }
    while (j < k)
    {
        a[l] = ar[j];
        j++;
        l++;
    }
}
void MergeSort(int a[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    MergeSort(a, l, mid);
    MergeSort(a, mid + 1, r);
    merge(a, l, mid, r);
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        MergeSort(a, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}