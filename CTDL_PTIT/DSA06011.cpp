#include <bits/stdc++.h>
using namespace std;
 
void quickSort(int *, int, int);
 
/* Function to print pair of elements
   having minimum sum */
void minAbsSumPair(int arr[], int n)
{
         
    // Variables to keep track
    // of current sum and minimum sum
    int sum, min_sum = INT_MAX;
     
    // left and right index variables
    int l = 0, r = n-1;
     
    // variable to keep track of
    // the left and right pair for min_sum
    int min_l = l, min_r = n-1;
     
    /* Array should have at least two elements*/
    if(n < 2)
    {
        cout << "Invalid Input";
        return;
    }
     
    /* Sort the elements */
    quickSort(arr, l, r);
     
    while(l < r)
    {
        sum = arr[l] + arr[r];
     
        /*If abs(sum) is less
          then update the result items*/
        if(abs(sum) < abs(min_sum))
        {
            min_sum = sum;
            min_l = l;
            min_r = r;
        }
        if(sum < 0)
            l++;
        else
            r--;
    }
     
    cout << "The two elements whose sum is minimum are "
         << arr[min_l] << " and " << arr[min_r];
}
 
// Driver Code
int main()
{
    int arr[] = {1, 60, -10, 70, -80, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    minAbsSumPair(arr, n);
    return 0;
}