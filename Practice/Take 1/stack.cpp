#include <bits/stdc++.h>
using namespace std;

const int SIZE = 5;

class Stack{
private:
    int top = 0;
    int arr[SIZE];
public:
    int isFull(){
        return top == SIZE ;
    }
    int isEmpty(){
        return top == 0;
    }

    void push(int data){
        if(isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[top++] = data;
    }
    void pop(){
        if (isEmpty()){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int peek(){
        return arr[top];
    }

    void display(){
        for (int i = 0;i<top;i++){
            int p = arr[i];
            cout << p << " ";
        }
        cout << endl;
    }
};


int main(){
    Stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();

    s.push(7);
    s.display();
s.peek();
}
