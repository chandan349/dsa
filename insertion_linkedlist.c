#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next; 
};

void linkedlistTraversal(struct Node *ptr){
    while(ptr!= NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertbinging(struct Node* head, int data)
{
struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->next = head;
ptr->data = data;
return ptr;
} 
struct Node *insertionindex(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while(i!= index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *insertionEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    while(p->next!= NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node *insertionAfter(struct Node* head,struct Node* pervNode, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = pervNode->next;
    pervNode->next = ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7,
    head->next= second;

    second->data= 11,
    second->next= third;

    third->data = 56,
    third->next = NULL;
    linkedlistTraversal(head);
    printf("THis is bigning insertion value\n");
    Bigning: 1;
    head = insertbinging(head, 45);
    linkedlistTraversal(head);
     printf("THis is index insertion value\n");
     index: 2;
   head = insertionindex(head, 83,2);
  linkedlistTraversal(head);
   printf("THis is End insertion value\n");
     End :3;
  head = insertionEnd(head , 32);
  linkedlistTraversal(head);
   printf("THis is After insertion value\n");
    After: 4;
 head = insertionAfter(head, second, 78);
 linkedlistTraversal(head);


   return 0;
}