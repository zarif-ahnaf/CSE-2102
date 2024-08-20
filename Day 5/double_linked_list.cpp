#include<bits/stdc++.h>

using namespace std;


struct link{
    struct link *previous;
    int data;
    struct link *next;
};
typedef struct link node;
node *h=0,*p=0,*q=0;

int main(){
    for(int i =0;i<5;i++){
        p = (node*)malloc(sizeof(node));
        printf("Enter Value:");
        scanf("%d",&p->data);

        p->previous = q;
        if (h==0) h = p;
        else q->next = p;


        q=p;
    }
    q->next = NULL;

    p=h;

    printf("Address\t\t\tData\t\tPrevious\t\tNext\n");

    p=h;
    while(1){
        printf("%x\t\t%d\t\t%x\t\t%x\n",p,p->data,p->previous,p->next);
        if(p->next == NULL){
            break;
        }
        p = p->next;
    }

}
