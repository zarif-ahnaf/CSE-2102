#include <stdio.h>
#include <string.h>
#include <malloc.h>


struct link{
    int data;
    struct link *next;
};
typedef struct link node;
node *p=0;

int main(){
    p = (node*) malloc(sizeof(node));
    printf("Enter value:");
    scanf("%d",&p->data);
    p -> next = NULL;
    printf("%x %d %x",p,p->data,p->next);

}
