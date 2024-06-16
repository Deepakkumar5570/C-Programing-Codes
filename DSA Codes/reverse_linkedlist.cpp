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
 node* reverse(node* &head){ //itrative method
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
// by recursive method
node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverseRecursive(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    
}

int main(){
    node* head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    display(head);
    node* newhead=reverseRecursive(head);//recursive___call
    display(newhead);
    cout<<endl;
    
    node* newhead1=reverse(head);//iterative___call
    display(newhead1);

    return 0;
}