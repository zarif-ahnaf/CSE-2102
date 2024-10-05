#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void insertAtHead(node*& head,int data){
    node* new_node=  new node(data);
    if(head==nullptr){
        head = new_node;
    }else{
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}


void insertAtTail(node*& head,int data){
    node *p = head;
    while(1){
        if(p->next == nullptr) break;
        p=p->next;
    }

    node* new_node = new node(data);
    p->next = new_node;
    new_node -> prev = p;
}


void display(node*&head){
    node *p = head;
    while(1){
        if(p == nullptr) break;
        cout << p->data << " ";
        p=p->next;
    }
    cout << endl;

}

int main(){
    node* head = nullptr;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtTail(head, 3);
    display(head);
}
