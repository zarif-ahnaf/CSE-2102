#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void insertAtBegining(Node*& head,int data)
{
    Node* newNode = new Node(data);
    if(head == nullptr)
    {
        head = newNode;
        return;
    }


    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtEnd(Node*& head,int data)
{
    Node* newNode = new Node(data);
    if(head == nullptr)
    {
        head=newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}


void insertAtPosition(Node*& head,int position,int data)
{
    if (position < 1)
    {
        cout << "The position must be greater or equal than 1"<< endl;
        return;
    }

    if(position == 1)
    {
        insertAtBegining(head,data);
        return;
    }
    Node* newNode = new Node(data);
    Node* temp = head;

    for(int i=1; temp != nullptr && i<position-1; i++)
        temp = temp->next;

    if(temp == nullptr)
    {
        cout << "Position greater than the number of nodes."<< endl;
        return;
    }

    newNode->next  = temp->next;
    newNode->prev = temp;
    if(temp->next != nullptr) temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteAtBeginning( Node*& head)
{
    if(head == nullptr)
    {
        cout << "The list is already empty." << endl;
        return;
    }

    Node *temp = head;
    head = head->next;
    if(head!= nullptr) head->prev = nullptr;
    delete temp;
}

void deleteAtEnd(Node*&head)
{
    if(head == nullptr)
    {
        cout << "The list is already empty." <<endl;
        return;
    }

    Node* temp = head;
    if(temp->next == nullptr)
    {
        head = nullptr;
        delete temp;
        return;
    }
    while(temp->next!=nullptr)
        temp=temp->next;

    temp->prev->next = nullptr;
    delete temp;
}

void deleteAtPosition(Node *&head,int position)
{
    if(head==nullptr)
    {
        cout << "The list is already empty." << endl;
        return;
    }
    if(position == 1)
    {
        deleteAtBeginning(head);
        return;
    };

    Node*temp = head;

    for(int i=i; temp!=nullptr && i<position; i++)
        temp = temp->next;

    if(temp == nullptr)
    {
        cout << "Position is greater than number of nodes." << endl;
        return;
    }
    if(temp->next != nullptr) temp->next->prev = temp->prev;
    if(temp->prev != nullptr) temp->prev->next = temp->next;

    delete temp;
}

void printListForward(Node* head)
{
    Node* temp = head;
    cout << "Forward List: ";
    while(temp!= nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void printListReverse(Node* head)
{
    Node* temp = head;
    if(temp == nullptr)
    {
        cout<<"The list is empty." << endl;
        return;
    }

    while(temp->next != nullptr)
        temp=  temp->next;

    cout << "Reverse list: ";
    while(temp!=nullptr)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout<<endl;
}
int main()
{
    Node* head = nullptr;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtBegining(head,5);
    insertAtPosition(head,15,2);
    cout << "After Insertions :" <<endl;
    printListForward(head);
    printListReverse(head);
    deleteAtBeginning(head);
    deleteAtEnd(head);
    deleteAtPosition(head,2);
    cout<<"After Deletions:"<<endl;
    printListForward(head);
    return 0;
}
