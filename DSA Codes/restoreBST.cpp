#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void calculatePTR(Node* root,Node** first,Node** mid,Node** last,Node**prev){
    if(root==NULL){
        return;

    }
    calculatePTR(root->left,first,last,mid,prev);
        if(*prev && root->data < (*prev)->data){
            if(!*first){
                *first=*prev;
                *mid=root;
            }
            else{
                *last=root;

            }
        }
        *prev=root;
        calculatePTR(root->right,first,mid,last,prev);
    }

void restoreBSt(Node* root){
    Node* first, *mid,*last,*prev;
    first=NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;
    calculatePTR(root,&first,&mid,&last,&prev);
        //case1
        if(first && last){
            swap(&(first->data),&(last->data));
        }
        else if(first && mid){
            swap(&(first->data),&(mid->data));
        }
    
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node *root=new Node(6);
    root->left=new Node(9);
    root->right=new Node(3);
    root->left->left=new Node(1);
    root->left->right=new Node(4);
    root->right->right=new Node(13);
    inorder(root);
    cout<<endl;
    restoreBSt(root);
    inorder(root);
    cout<<endl;
    return 0;
}