#include<iostream>
#include "linked.h"

LinkedBST::LinkedBST()
{
    root= NULL;
}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(int data)
{
    if root==NULL
    {
        root->data=data;
    }

    else
    {
        if (data > root->data)
        {
            if (root->right!=NULL)
            {
                root=root->right;
                add(data);
            }

            else
            {
                Node* newNode=new Node();
                newNode->data = data;
                root->right=newNode;
            }
        }

        else
        {
            if(root->left!=NULL)
            {
                root=root->left;
                add(data);
            }
            else
            {
                Node* newNode=new Node();
                newNode->data=data;
                root->left=newNode;
            }
            
        }
    }
    
}