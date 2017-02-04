/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node;
int height(struct node* root)
{//	int maxheight=-1;

        if(root==NULL)
            return -1;
        return root->ht;
}

int max(int a,int b)
{
    return (a>b) ? a: b;
}

int getBalance(struct node* root)
{	
    return (height(root->left)- height(root->right));
}

//rightRotation function::>
node *rightRotate(struct node* y)
    {
    struct node* x=y->left;
    struct node* t2=x->right;
    x->right=y;
    y->left=t2;
    y->ht=max(height(y->left),height(y->right))+1;
    x->ht=max(height(x->left),height(x->right))+1;
    return x;
    
}
node *leftRotate(struct node* x)
    {
    struct node* y=x->right;
    struct node* t1=y->left;
    y->left=x;
    x->right=t1;
    x->ht=max(height(x->left),height(x->right));
    y->ht=max(height(y->left),height(y->right));
    return y;
}
node * insert(node * root,int val)
{
    //Step1:performing the normall bst insertion
    if(root==NULL)
        {
        struct node* root=(struct node*)malloc(sizeof(struct node));
        root->val=val;
        root->left=NULL;
        root->right=NULL;
        root->ht=0;
        return root;
        }
    if(val < root->val)
        {
         root->left=insert(root->left,val);   
        }
    else if(val > root->val)
        {
            root->right=insert(root->right,val);
        }
    else return root;//equal keys are not allowed in BST.
    
    //Step2:to update height of he ancestor node.
    root->ht=1+max(height(root->left),height(root->right));
    //step3:to check the balance factor of the node so that the node is not unbalanced.
    int balance=getBalance(root);
    cout<<"balance of  "<<root->val<<":"<<balance<<endl;
    //if this node becomes unbalance then there are four cases
    //1:left left case
    if(balance>1 && val < root->left->val)
    {
        return rightRotate(root);
    }
    //2:right right case
    if(balance < -1 && val > root->right->val)
    {
        return leftRotate(root);
    }
    //3:left-right case
    if(balance >1 && val > root->left->val) 
    {	
        root->left=leftRotate(root->left);
        return rightRotate(root->left);
    }
    //4:right-left:case
    if(balance < -1 && val < root->right->val)
        {
        root->right=rightRotate(root->right);
        return leftRotate(root->right);
    }
//	root->ht=1+max(height(root->left),height(root->right));
    return root;
   
  
}

void inorder(struct node* root)
{
	if(root!=NULL)
	{

	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
	}
}
int main()
{
struct node* root=NULL;
root=insert(root,3);
root=insert(root,2);
root=insert(root,4);
root=insert(root,5);
root=insert(root,6);
inorder(root);
cout<<endl;
}
