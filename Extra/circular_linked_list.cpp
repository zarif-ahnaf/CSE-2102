#include<bits/stdc++.h>

using namespace std;


struct link{
    int data;
    struct link *next;
};
typedef struct link node;
node *h=0,*p=0,*q=0;

int main(){
    int n;
    printf("Enter the size of linked list:");
    scanf("%d",&n);
    while(n--){
        p = (node *)malloc(sizeof(node));
        printf("Enter value:");
        scanf("%d",&p->data);
        if(h==0){
            h = p;
        }
        else{
            q->next=p;
        }
        q=p;
    }
    q->next = h;
    printf("Address\t\tData\t\tNext\n");

    p=h;
    while(1){
        printf("%x\t\t%d\t\t%x\n",p,p->data,p->next);
        /*
        printf("%d", p->data);
        printf("->");
        */
        if(p->next == h){
            break;
        }
        p = p->next;
    }
}
