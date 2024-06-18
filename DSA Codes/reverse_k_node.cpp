#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }

};
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }    
        temp->next=n;
    
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
node* reverseKnode(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count< k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;

    }
    if(nextptr!=NULL){
        head->next=reverseKnode(nextptr,k);

    }
    return prevptr;
}
int main(){
    node* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,6);
    insertAtTail(head,8);
    insertAtTail(head,10);
    insertAtTail(head,21);
    display(head);
    cout<<endl;
    int k=2;
    node* newhead=reverseKnode(head,k);
    display(newhead);
    return 0;
}