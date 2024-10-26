#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int maxSize;
    int* array;

    Stack(int max) : top(-1), maxSize(max), array(new int[max]) {}

    ~Stack() {
        delete[] array;
    }

    bool isFull() const {
        return top == maxSize - 1;
    }

    bool isEmpty() const {
        return top == -1;
    }

    void push(int item) {
        if (isFull()) {
            cout << "Stack overflow: max size reached" << endl;
            return;
        }
        array[++top] = item;
        cout << "Pushed " << item << " to stack" << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow: stack is empty" << endl;
            return INT_MIN;
        }
        return array[top--];
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty, nothing to peek" << endl;
            return INT_MIN;
        }
        return array[top];
    }
};

int main() {
    Stack stack(10);
    stack.push(5);
    stack.push(10);
    stack.push(15);
    cout << "Top element is " << stack.peek() << endl;
    return 0;
}
