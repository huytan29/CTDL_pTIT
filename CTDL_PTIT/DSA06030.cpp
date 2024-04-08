#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin>>k;
    while(k--)
    {
    int n;
    cin >> n;
    vector<int> a(n);
    stack<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        int t,ok;
        ok = true;
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                ok = false;
                t = a[j]; a[j] = a[j+1]; a[j+1] = t;
            }
        }
        if(ok) break;
        st.push(a);
    }
    int cnt=st.size();
    while (st.size())
    {
        a = st.top();
        st.pop();
        cout << "Buoc " << cnt-- << ": ";
        for (int j = 0; j <n; j++)
            cout << a[j] << " ";
        cout << endl;
    }
    }
}