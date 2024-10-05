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
    node* new_node = new node(data);


    if(head==nullptr){
        head = new_node;
    }else{
        new_node->next = head;
        head = new_node;
    }

}

void deleteHead(node*&head){
    head=head->next;
}

void deleteAtPosition(node*&head, int position){
    if(position == 1){
        deleteHead(head);
    }
    node *p = head;
    node *q = nullptr;
    int counter = 1;
    while(1){
        if(counter == position) break;
        if(p == nullptr) break;
        q=p;
        p=p->next;
        counter++;
    }
    if(p==nullptr){
        cout << "Element not found at position" << endl;
        return;
    }
    q->next = p->next;


}

void insertAtTail(node*&head,int data){
    node *p = head;

    while(1){
        if(p->next == nullptr) break;
        p = p->next;
    }

    node *new_node = new node(data);
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

int main(){
    node* head = nullptr;

    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtTail(head,3);
    deleteAtPosition(head,2);
    deleteHead(head);
    deleteHead(head);
    display(head);

}
