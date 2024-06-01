#include"bits/stdc++.h"
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
     
     node(int val){
        data=val;
        left=NULL;
        right=NULL;
     }

};
void print(struct node* root){
   if(root==NULL){
      return;
   }
   cout<<root->data<<" ";
   print(root->left);
   print(root->right);
   print(root->left->left);
   print(root->left->right);
   print(root->right->left);
   print(root->right->right);
}
int main(){
    struct node* root =new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    print(root);

   return 0;
    
}