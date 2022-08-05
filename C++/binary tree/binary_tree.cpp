#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node* createnode(int data){
    struct node *n;
    n->data = data;
    n = (struct node*)malloc(sizeof(struct node));
    n->left  = NULL;
    n->right = NULL;
    return n;
}

void prefix(struct node *root){
    if(root=NULL){
        return;
    }
    cout<< root->data<<" ";
    prefix(root->left);
    prefix(root->right);

}
void postfix(struct node*root){
    if(root=NULL){
        return;
    }
    postfix(root->left);
    postfix(root->right);
    cout<<root->data;
}
void infix(struct node*root){
    if(root=NULL){
        return;
    }
    infix(root->left);
    cout<<root->data;
    infix(root->right);
}    



int main(){
    struct node *p = createnode(4);
    struct node *p1 =createnode(2);
    struct node *p2 =createnode(3);
    struct node *p3 =createnode(5);
    struct node *p4 =createnode(6);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    prefix(p);


    return 0;
}