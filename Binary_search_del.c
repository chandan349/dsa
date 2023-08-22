#include<stdio.h>
#include<stdlib.h>
struct btreenode
{
    struct btreenode *lchild;
    int data;
    struct btreenode *rchild; 
};

typedef struct  btreenode bnode;
void insert(bnode **bt, int t)
{
    if((*bt)==NULL)
    {
        bnode *temp;
        temp=(bnode*)malloc(sizeof(bnode));
        temp->lchild=NULL;
        temp->data=t;
        temp->rchild=NULL;
        *bt=temp;
    }
    else
    {
        if(t<(*bt)->data)
        insert(&(*bt)->lchild,t);
        else
        insert(&(*bt)->rchild,t);
    }
}
void inorder(bnode *bt)
{
    if(bt!=NULL)
    {
        inorder(bt->lchild);
        printf("\t%d",bt->data);
        inorder(bt->rchild);
    }
}
