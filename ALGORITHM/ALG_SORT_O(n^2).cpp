
#include<bits/stdc++.h>
using namespace std;
/* SẮP XẾP NỔI BỌT
Ý TƯỞNG:CHẠY N-1 BƯỚC VÀ SO SÁNH 2 PHẦN TỬ CẠNH NHAU VÀ ĐỔI CHỖ 
 */
void Bubble_sort(int a[],int n)
{
    bool oke= false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
             swap(a[j],a[j+1]);
             oke =true;
            }
        }
        if(!oke) break;
    }
}
/* SẮP XẾP CHÈN
Ý TƯỞNG:CHẠY TỪ i=0 đến i=N, so sánh phần tử thứ i với phần tử trước nó nếu mà nhỏ hơn thì đẩy phần tử vừa tìm 
được ra phía sau và cứ tiếp tục tìm về phía trước đến khi kết thúc, nếu kết thúc mà vẫn còn trong 
mảng thì phần tử trước đó sẽ bằng phần tử mà chúng ta đang đem đi so sánh.
 */
void insert_Sort(int a[],int n)
{                                                   
    for(int i = 1; i < n; i++)
    {
        int pos=i-1,x=a[i];
        while(pos>=0&&a[pos]>x)
        {
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=x;
    }
}
/* SAP XEP CHON 
Ý TƯỞNG :CHẠY TỪ i đến n-1; mỗi bước thì tìm phần tử nhỏ nhất và đẩy về đầu(hay nói cách khác là đổi chỗ với 
phần tử thứ i) */
void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_pos=i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j]<a[min_pos]) min_pos=j;
        }
        swap(a[i],a[min_pos]);
    }
}
void in(int a[],int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[5]={3,2,5,1,4},n;
    cin>>n;
    selectionSort(a,n);
    // insert_Sort(a,n);
    // Bubble_sort(a,n);
    in(a,n);
}