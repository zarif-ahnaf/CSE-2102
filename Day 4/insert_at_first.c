#include <stdio.h>
#include <string.h>


struct link{
    int data;
    struct link *next;
};
typedef struct link node;
node *h=0,*p=0,*q=0;

int main(){
    for(int i=1;i<=5;i++){
         p = (node*) malloc(sizeof(node));
        printf("Enter value:");
        scanf("%d",&p->data);

        if (h==0)
            h = p;
        else
            q->next = p;
        q=p;
    }
    p=h;
    // CODE
    p = (node*) malloc(sizeof(node));
    printf("Enter value:");
    scanf("%d",&p->data);
    p-> next = h;
    h=p;
    printf("Address\t\tData\t\tNext\n");
    // CODE

    while(1){
        printf("%x\t\t%d\t\t%x\n",p,p->data,p->next);
        /*
        printf("%d", p->data);
        printf("->");
        */
        if(p->next == NULL){
            break;
        }
        p = p->next;
    }

}

