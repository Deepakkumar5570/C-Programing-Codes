#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
bool searchKey(node* &head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {

        if (temp->data == key)
        {
            return key;
            
        }
        temp=temp->next;
    }
    return false;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);

    insertAtTail(head, 5);
    insertAtTail(head,7);

    insertAtTail(head, 9);
    print(head);
    cout << endl;
    insertAtHead(head, 8);
    print(head);
    cout<<endl;
    cout<<"element search :"<<searchKey(head,9);
    
    return 0;
}