#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*next;
    node(int data){
        this->data=  data;
        this->next = nullptr;
    }

};

void insertAtHead(node*&head, int data){
    node *new_node = new node(data);


    if(head==nullptr){
        new_node->next = new_node;
        head = new_node;
    }else{
        node *p = head;
        while(1){
            if(p->next==head) break;
            p=p->next;
        }

        new_node ->next = head;
        p->next = new_node;
        head=new_node;
    }
}

void deleteHead(node*&head){
    node *p = head;
    while(1){
        if(p->next==head) break;
        p=p->next;
    }

    head = head->next;
    p->next =head;
}

void deleteAtPosition(node*&head, int position){
    if(position == 1) {
        deleteHead(head);
        return;
    }
    int f=0;

    node *p = head;
    node *q  = nullptr;
    int counter = 1;
    while(1){
        if(counter == position) break;
        if(p == head && f==1) break;
        f=1;
        counter++;
        q=p;
        p=p->next;
    }
    if(p==head && counter==position){
        cout << "Element not found in linked list" << endl;
        return;
    }

    q->next = p->next;
}

void insertAtTail(node*&head,int data){
    node *p = head;
    while(1){
        if(p->next == head) break;
        p = p->next;
    }
    node *new_node = new node(data);
    p->next = new_node;
    new_node->next = head;

}

void display(node*&head){
    if(head == nullptr) {
        cout << "Linked List is empty" <<endl;
        return;
    }

    node* p = head;
    while(1){
        cout << p->data << " ";
        if(p->next == head) break;

        p=p->next;
    }

}

int main(){
    node* head = nullptr;
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(head,3);

    deleteAtPosition(head,2);
    display(head);

}
