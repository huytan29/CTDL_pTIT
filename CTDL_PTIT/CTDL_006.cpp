#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
struct Node
{
    int data;
    Node *next;
};
typedef struct Node *node;
node makeNode(int x)
{
    node tmp = new Node();
    tmp->next = NULL;
    tmp->data = x;
    return tmp;
}
void pushLastNode(node &head, int x)
{
    node tmp = makeNode(x);
    if (head == NULL)
        head = tmp;
    else
    {
        node p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
    }
}
void init(node &head, int &n)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pushLastNode(head, x);
    }
}
void show(node head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void solver(node &head)
{
    node ptr1, ptr2;
    ptr1 = head;
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1;
        while (ptr2->next != NULL)
        {
            if (ptr1->data == ptr2->next->data)
            {
                ptr2->next = ptr2->next->next;
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
int main()
{
    node head = NULL;
    int n;
    init(head, n);
    solver(head);
    show(head);
    return 0;
}