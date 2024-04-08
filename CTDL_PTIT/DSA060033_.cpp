#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int maxIndexDiff(int arr[], int n)
{
 
        int rightMax[n];
        rightMax[n-1]= arr[n-1];
        for(int i = n-2; i>=0; i--)
            rightMax[i] = max(rightMax[i+1] , arr[i]);
        int maxDist = INT_MIN;
        int i = 0, j = 0;
        while(i<n && j<n)
        {
            if(rightMax[j] > arr[i])
            {
                maxDist = max( maxDist, j-i );
                j++;
            }
            else 
                i++;
        }
        if(maxDist==0) return -1;
        return maxDist;
         
         
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
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		cout<<maxIndexDiff(a,n)<<endl;
	}
}