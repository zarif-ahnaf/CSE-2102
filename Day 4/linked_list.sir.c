#include <stdio.h>
#include <string.h>
#include <malloc.h>


struct link{
    int data;
    struct link *next;
};
typedef struct link node;
node *h=0,*p=0,*q=0;

int main(){
    int i,x;
    for(i=1;i<5;i++){
        p = (node*) malloc(sizeof(node));
        printf("Enter value:");
        scanf("%d",&p->data);
        if(h==0)
            h=p;
        else
            q->next = p;
        q=p;
    }
    q->next = NULL;

}
