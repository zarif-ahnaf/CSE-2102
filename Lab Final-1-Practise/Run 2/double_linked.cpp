#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*next;
    node*prev;
    node(int data){
        this->data=  data;
        this->next = nullptr;
        this->prev = nullptr;
    }

};

void insertAtHead(node*&head, int data){
    node* new_node = new node(data);

    if(head==nullptr){
        head = new_node;
    }else{
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

}

void deleteHead(node*&head){
    head=head->next;
    head->prev = nullptr;
}

void deleteAtPosition(node*&head, int position){
    if(position == 1){
        deleteHead(head);
    }
    node *p = head;
    int counter = 1;
    while(1){
        if(counter == position) break;
        if(p == nullptr) break;
        p=p->next;
        counter++;
    }

    if(p==nullptr){
        cout << "Element not found at position" << endl;
        return;
    }

    p->prev->next = p->next;

}

void insertAtTail(node*&head,int data){
    node *p = head;

    while(1){
        if(p->next == nullptr) break;
        p = p->next;
    }

    node *new_node = new node(data);
    new_node -> prev = p;
    p->next = new_node;

}

void display(node*&head){
    if(head == nullptr) {
        cout << "Linked List is empty" <<endl;
        return;
    }

    node* p = head;
    while(1){
        if(p==nullptr) break;
        cout << p->data << " ";
        p=p->next;
    }

}
void insertAtPosition(node*&head,int position,int data){
    int counter = 1;
    node *p = head;
    while(1){
        if(counter == position ) break;
        if(p==nullptr) break;
        counter++;
        p=p->next;
    }
    if(p==nullptr) {
        cout << "Element not found";
        return;
    }
    node*new_node= new node(data);
    new_node->prev = p;
    new_node->next = p->next;
    p->next = new_node;

}
int main(){
    node* head = nullptr;

    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtTail(head,3);
    deleteAtPosition(head,3);
    insertAtPosition(head,2,3);
    display(head);

}
