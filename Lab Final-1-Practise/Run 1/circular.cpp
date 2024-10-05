#include <bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtHead(node*& head,int data){
    node* new_node = new node(data);
    if(head == nullptr){
        new_node->next = new_node;
        head = new_node;
    }else{
        node *p = head;
        while(1){
            if(p->next == head) break;
            p=p->next;
        }

        new_node->next = head;
        head = new_node;
        p->next = head;
    }
}

void insertAtPosition(node*& head, int data, int position){
    if(position == 0){
        insertAtHead(head, data);
        return;
    }
    node *p = head;
    int counter = 1;
    while(1){
        if(counter == position) break;
        if(p->next == head) break;
        p=p->next;
        counter++;
    }
    node* new_node = new node(data);
    new_node->next = p->next;
    p->next = new_node;

}

void insertAtTail(node*& head,int data){
    node *p = head;
    while(1){
        if(p->next == head) break;
        p=p->next;
    }
    node *new_node = new node(data);
    p->next = new_node;
    new_node->next = head;
}

void display(node*& head){
    int f=0;
    node *p = head;
    while(1){
        f=1;
        cout << p->data << " ";
        if(f == 1 && p->next == head) break;

        p=p->next;
    }
    cout << endl;

}

void deleteAtPosition(node*&head, int position){
    int counter = 1;
    node *p=head;
    node *q;

    while(1){
        if(counter == position) break;
        if(p->next == head) break;
        q=p;
        p=p->next;
        counter++;
    }

    if(p==head){
        node *temp = head;
        while (1){
            if(temp->next == head) break;
            temp=temp->next;
        }
        head = head->next;
        temp->next = head;
    }else{
       q->next = p->next;
    }

}

int main(){
    node* head =nullptr;

    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtTail(head,3);

    insertAtPosition(head,4,3);
    deleteAtPosition(head,1);
    display(head);
}
