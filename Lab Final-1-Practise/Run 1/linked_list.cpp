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
        head = new_node;
    }else{
        new_node->next = head;
        head = new_node;
    }
}

int insertAtPosition(node*& head,int data,int position){
    if(position==0){
        insertAtHead(head,data);
        return 1;
    }
    node* p  = head;
    int current  = 1;
    while(1){
        if(current == position) break;
        if(p==nullptr) {
            cout << "Index out of range" << endl;
            return 0;
        }
        p=p->next;
    }

    node* new_node = new node(data);
    new_node -> next = p->next;
    p->next = new_node;

    return 1;
}


void insertAtTail(node*& head, int data){
    node *p = head;
    while(1){
        if(p->next == nullptr) break;
        p=p->next;
    }

    node* new_node = new node(data);
    p->next = new_node;
}

void display(node*& head){
    node* p = head;

    while(1){

        cout << p->data;
        if(p->next == nullptr){
            break;
        }else{
            cout << "->";
        };
        p = p->next;
    }
    cout <<endl;

}

int deleteAtPosition(node*& head, int position) {
    node* p = head;
    node* q = nullptr;

    int counter = 1;
    while(1){
        if(counter == position) break;
        q=p;
        p=p->next;
        counter++;
        if(p == nullptr) {
            cout << "Element not found" << endl;
            return 0;
        }
    }

    if(p==head){
        head = p->next;
    }else{
        q->next = p->next;

    }
    return 1;
}



int main(){
    node* head = nullptr;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtTail(head,3);
    deleteAtPosition(head, 3);
    insertAtHead(head,2);
    deleteAtPosition(head,2);
    insertAtPosition(head,3,0);
    display(head);
}
