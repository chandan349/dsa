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


/*void search(bnode *root, int num,bnode **xd,bnode **par)
{
    bnode *q;
    q=root;
    int i=0;
   int found=0;
   // par=NULL;
   printf("\ninside search");
    while(q!=NULL)
    {
        if(q->data==num)
        {
            found=1;
           *xd=q;
            printf("\ninside function address= %p and key =%d",*xd,(*xd)->data);
           // return xd;
           break;
        }
        else{
            if(num<q->data)
            {
                *par=q;
                q=q->lchild;
                printf("\nleft");
            }
            else
            {
                *par=q;
                q=q->rchild;
                printf("\nright");
            }
        }
    }
   // printf("\nend of function");
    //return xd;
}*/
int height(bnode *root){
    int static left_height=0, right_height=0;
    if(root==NULL){
        return -1;
        // return 0;
    }
    else{
        left_height = height(root->lchild);
        right_height = height(root->rchild);
        if(left_height>right_height)
        {
            return (left_height+1);
        }
        else{
            return(right_height+1);
        }
    }
    
}
void main()
{
   bnode *bt, *x,*par;
    int n, key, i=0, h; 
    void insert(bnode **, int);
    void inorder(bnode *);
    bt=NULL;
    x=NULL;
    par=NULL;
    printf("Enter the no of item to be inserted:");
    scanf("%d", &n);
    while(i<n)
    {
        printf("Enter the data");
        scanf("%d", &key);
        insert(&bt,key);
        i++;
    }
   // bnode *bt, *x, *i, *found;
  /*  printf("\nEnter the key to search\n");
    scanf("%d", &key);
   // search(bt,key,&x,&par);
   printf("\n node=%p and key=%d",x,x->data);
   printf("\n inside main parent=%p and key%d" ,par, par->data);*/
   printf("\nInorder formet:");
    inorder(bt);
    h = height(bt);
    // h=height (bt)-1;
    printf("\nheight=%d",h);

}


