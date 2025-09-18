/*#include <iostream>
#define MAX 100
using namespace std;
class Stack {
private:
    int arr[MAX];
    int top;

public:
    // Constructor to initialize the stack
    Stack() : top(-1) {}

    // Inline methods for efficiency
    inline bool isEmpty() const { return top == -1; }
    inline bool isFull() const { return top == MAX - 1; }

    // Push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Error: Stack Overflow\n";
            return;
        }
        top = top + 1;
        arr[top] = value;
    }

    // Pop the top element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Error: Stack Underflow\n";
            return -1;
        }
        top--;
        return arr[top];
    }

    // Peek at the top element
    int peek() const {
        if (isEmpty()) {
            cout << "Error: Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // Display the stack contents
    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Stack s;

    // Pushing elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    // Displaying the top element
    cout << "Top element: " << s.peek() << "\n";

    // Popping elements from the stack
    cout << "Popped: " << s.pop() << "\n";
    cout << "Popped: " << s.pop() << "\n";
    s.display();

    return 0;
}*/










#include<iostream>
#define MAX 100
using namespace std;
class stack{
private:
    int arr[MAX];
    int top;
public:
    stack() {
        top = -1;
    }
    void push(int value){
        top = top + 1;
        arr[top] = value; 
    }
    int pop(){
        top = top - 1;
        return arr[top];
    }
    int peak() const{
        return arr[top];
    }
    void display(){
        for(int i=top; i>=0; --i){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout<<"\n";
    s.pop();
    s.display();
    cout<<"\n";
    cout<<s.peak();
}

