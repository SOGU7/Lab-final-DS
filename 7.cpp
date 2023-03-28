#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node* right;
};
class BST
{
public:
    node *root;
    BST()
    {
        root=NULL;
    }
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data=value;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
    void Insert(int value)
    {
        node *temp=CreateNewNode(value);
        if(root==NULL)
        {
            root=temp;
            return;
        }
        node *prv=NULL;
        node *cur = root;
        while(cur!=NULL)
        {
            if(cur->data>=temp->data)
            {
                prv=cur;
                cur=cur->left;
            }
            else
            {
                prv=cur;
                cur=cur->right;
            }
        }
        if(prv->data>=temp->data)
        {
            prv->left=temp;
        }
        else
            prv->right=temp;
    }
    bool Search(int value)
    {
        node *temp=root;
        if(root==NULL)
            return false;
        while(temp!=NULL)
        {
            if(temp->data>value)
            {
                temp=temp->left;
            }
            else if(temp->data<value)
            {
                temp=temp->right;
            }
            else
            {
                return true;
            }
        }
        return false;

    }
};
int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n";
    cout<<bst.Search(9)<<"\n";
    cout<<bst.Search(20)<<"\n";
    cout<<bst.Search(60)<<"\n";
    return 0;
}

