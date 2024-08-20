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
        p = (node*)malloc(sizeof(node));
        printf("Enter Value:");
        scanf("%d",&p->data);
        if (h==0) h = p;
        else q->next = p;
        q=p;
    }
    q->next = NULL;

    p=h;
    printf("Address\t\t\tData\t\t\tNext\n");

    while(1){
        printf("%x\t\t%d\t\t\t%x\n",p,p->data,p->next);
        /*
        printf("%d", p->data);
        printf("->");
        */
        if(p->next == NULL){
            break;
        }
        p = p->next;
    }

    int s;
    printf("What element do you want to search:");
    scanf("%d",&s);
    p=h;
    while(1){
        if(p==NULL) {
            printf("Element not found in linked list\n");
            return 0;
        }
        if(p->data==s){
            printf("Element found at address %x\n",p);
            break;
        }
        p = p->next;
    }

    int data,el;
    printf("What element do you want to insert:");
    scanf("%d",&data);
    printf("After which data do you want to insert:");
    scanf("%d",&el);

    node *m = (node*)malloc(sizeof(node));
    m->data = data;


    if(el == 0){
        m->next = h;
        h = m;
    }
    else{
        p=h;
        while(1){
            if(p->data == el){
                break;
            }
            q=p;
            p = p->next;
            if(p == NULL) {
                printf("Element not found in linked list\n");
                return 0;
            }
        }


        m->next = p->next;

        p->next = m;
    }


    p=h;
    printf("Address\t\t\tData\t\t\tNext\n");

    while(1){
        printf("%x\t\t%d\t\t\t%x\n",p,p->data,p->next);
        //printf("%d", p->data);
        //printf("->");
        if(p->next == NULL){
            break;
        }
        p = p->next;
    }

    int x;
    printf("What element do you want to delete:");
    scanf("%d",&x);

    if(h->data == x){
        h = h->next;
    }else{
        p=h;
        while(1){
            if(p->data == x){
                break;
            }
            q=p;
            p = p->next;
            if(p == NULL) {
                printf("Element not found in linked list\n");
                return 0;
            }
        }
        printf("%x %x\n",p,q);
        node *n = p->next;

        (q->next)=n;
    }


    p=h;
    printf("Address\t\t\tData\t\t\tNext\n");

    while(1){
        printf("%x\t\t%d\t\t\t%x\n",p,p->data,p->next);
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
