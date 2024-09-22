#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node node;
node *p=0,*q=0,*h=0;

node *_search(int data){
    node *q = h;

    while(1){
        if(q->data = data){
            return q;
        }
        if(q->next == h){
            break;
        }
        q=q->next;
    }

}

void display(){
    node *q = h;
    cout << "Current" << "\t\t" << "Data" << "\t\t" << "Next" <<endl;

    while(1){
        cout  << q << "\t" << q->data << "\t\t" << q->next << endl;
        if(q->next == h) break;
        q = q->next;
    }
}

int _insert(int data_node,int data){
    node *q=h;

    p = (node*)malloc(sizeof(node));
    p-> data = data;
    if(h == NULL){
        p->next = p;
        h = p;
        return 1;
    }

    if(data_node == 0){
        p->next = h;

        while(1){
          if(q->next == h){
            q->next = p;
            break;
          }
          q=q->next;
        }
        h=p;

    }
    else{
        while(1){

            if(q->data == data_node) {
                break;
            }
            if(q->next == h) {
                cout << "Element was not found in linked list"<<endl;
                return 0;
            }
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
    return 1;

}
int update(int data_to_be_updated, int data) {
    node *q = h;
    while(1){
        if (q->data == data_to_be_updated){
            q->data = data;
            return 1;
        }

        if(q->next == h) {
            cout << "Element was not found in linked list"<<endl;
            return 0;
        }
        q=q->next;

    }
}

int _delete(int data){
    node* q = h;
    node* r = 0;

    while(1){

        if(q->data == data) {
            break;
        }
        if(q->next == h) {
            cout << "Element was not found in linked list"<<endl;
            return 0;
        }
        r = q;
        q = q->next;
    }
    r->next = q->next;
    return 1;
}

int main(){
    cout << "Enter the size of circular linked list: ";
    int n;
    cin >> n;


    if(n>0){
        while(n--){
            p = (node*)malloc(sizeof(node));
            cout << "Enter Data:";
            cin >> p->data;
            if(h == 0) h = p;
            else q-> next = p;
            q = p;
        }
        q->next = h;
    }
    //display(h);

    cout << "Enter the data after which you want to insert (0 for head):";
    int pos,value;
    cin >> pos;
    cout << "Enter the value you want to insert:";
    cin >> value;

    if(_insert(pos,value)) display();
    else return 0;

    cout << "Enter the element you want to delete:";
    int del_data;
    cin >> del_data;

    if(_delete(del_data)) display();
    else return 0;

    cout << "Enter the data that you want to update:";
    int data_to_be_updated,updated_data;
    cin >> data_to_be_updated;
    cout << "Enter the data you want to update with:";
    cin >> updated_data;

    if(update(data_to_be_updated,updated_data)) display();
    else return 0;

    return 0;

}
