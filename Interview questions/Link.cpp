#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct node
{
    int data;
    struct node* next;
    struct node* front;
}ElemSN;

ElemSN* createLink(int* num){
    ElemSN* h;
    ElemSN* p;
    ElemSN* q;

    h = q = (ElemSN*)malloc(sizeof(ElemSN));

    h->data = num[0];
    h->front = h->next = NULL;

    for(int i = 1; i < N; i++){
        p = (ElemSN*)malloc(sizeof(ElemSN));
        p->data = num[i];
        p->front = q;
        p->next = NULL;
        q->next = p;

        printf("data[%d]: %d\n", i, num[i]);

        q = p;
    }

    return h;

}

ElemSN* delNode(ElemSN* head, ElemSN* s){
    ElemSN *h, *p, *q;
    h = p = head;
    q = NULL;
    
    for(p->data != s->data; q = p; p = p->next);

    if(p == head){
        h = p->next;
        h->front = NULL;
        p->next = NULL;

        free(p);
    }
    else{
        q->next = p->next;
        p->next->front = q;
        p->front = p->next = NULL;
        printf("p->data: %d", p->data);

        free(p);
    }

    return h;
}

ElemSN* insertNode(ElemSN* head, ElemSN* s, ElemSN* pa){
    ElemSN *h, *p, *q;

    h = p = head;
    q = NULL;
    for(p->data != s->data; q = p; p = p->next);

    if(p == NULL){
        return NULL;
    }

    if(p == head){
        pa->next = h;
        h->front = pa;
    }
    else{
        pa->next = p->next;
        p->next->front = pa;
        pa->front = p;
        p->next = pa;
    }

    return h;
}

void outPut(ElemSN *head)
{
    ElemSN *p = head;

    while(p != NULL)
    {
        printf("%d-->",p->data);
        p = p->next;
    }
    printf("\n");
}


int main(){

    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    ElemSN *s,*h,*head,*q,*pa;
    s = (ElemSN*)malloc(sizeof(ElemSN));
    s->data = 5;
    s->front = NULL;
    s->next = NULL;
    pa = (ElemSN*)malloc(sizeof(ElemSN));
    pa->data = 100;
    pa->front = NULL;
    pa->next = NULL;
    h = createLink(num);
    printf("链表建立完如下:\n");
    outPut(h);
    printf("删除掉元素5以后链表如下:\n");
    head = delNode(h,s);
    outPut(head);
    printf("插入元素后链表如下:\n");
    h = createLink(num);
    q = insertNode(h,s,pa);
    outPut(q);

}