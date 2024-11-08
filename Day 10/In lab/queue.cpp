#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

class Queue
{
private:
    int front;
    int rear;
    int arr[MAX_SIZE];

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        return (rear == MAX_SIZE - 1);
    }
    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Error: Queue is full" << endl;
            return;
        }
        if (front == MAX_SIZE)
        {
            front = 0;
        }

        if (isEmpty())
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = x;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is empty" << endl;
            return;
        }

        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    cout << "Initialize a Queue" << endl;
    Queue q;
    cout << "Is this Queue is empty? " << q.isEmpty() << endl;
    cout << "Insert some elements into the queue:" << endl;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    cout << "Is the Queue full? " << q.isFull() << endl;
    cout << "Is the Queue is empty? " << q.isEmpty() << endl;
    q.display();
    cout << "Front element is " << q.peek() << endl;
    cout << "Remove two elements from the Queue" << endl;
    q.dequeue();
    q.dequeue();
    q.display();
    cout << "Front element is: " << q.peek() << endl;
}
