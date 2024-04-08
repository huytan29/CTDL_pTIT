#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
     Node *next;
};
typedef struct Node * node;
node makeNode(int x)
{
    node tmp = new Node();
    tmp->next=NULL;
    tmp->data=x;
    return tmp;
}
void pushLastNode(node &a,int x)
{
    node tmp = makeNode(x);
    if(a==NULL) a=tmp;
    else{
        node p=a;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=tmp;
    }
}
void init(node &a,int &n,int &k)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        pushLastNode(a,x);
    }
    cin>>k;
}
void deleteNode(node &a,int x)
{
    node tmp=a;
    while(a->data==x)
    {
        a=a->next;
    }
    while(tmp->next!=NULL)
    {
        if(tmp->next->data==x)
        {
            tmp->next=tmp->next->next;
        }
        else{
            tmp=tmp->next;
        }
    }
}
void show(node a)
{
    for(node p=a;p!=NULL;p=p->next)
    {
        cout<<p->data<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    node head=NULL;
    int n,k;
    init(head,n,k);
    deleteNode(head,k);
    show(head);
    return 0;
}