#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int size;
    int *arr;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "The stack is full! Cannot push.\n";
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack.\n";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "The stack is empty! Cannot pop.\n";
        }
        else
        {
            cout << arr[top] << " removed from stack.\n";
            top--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "The stack is empty.\n";
        }
        else
        {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    void isEmpty()
    {
        if (top == -1)
            cout << "The stack is empty.\n";
        else
            cout << "The stack is not empty.\n";
    }

    void isFull()
    {
        if (top == size - 1)
            cout << "The stack is full.\n";
        else
            cout << "The stack is not full.\n";
    }

    void display()
    {
        if (top == -1)
        {
            cout << "The stack is empty.\n";
            return;
        }

        cout << "The stack elements are: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    int size, choice, value;

    cout << "Enter the size of stack: ";
    cin >> size;

    Stack s(size);

    do
    {
        cout << "\n---STACK MENU---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (Top Element)\n";
        cout << "4. Check if Empty\n";
        cout << "5. Check if Full\n";
        cout << "6. Display\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.isEmpty();
            break;

        case 5:
            s.isFull();
            break;

        case 6:
            s.display();
            break;

        case 0:
            cout << "We have Exited the program...\n";
            cout << "Thank you for using the stack.\n";
            break;

        default:
            cout << "Sorry, Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}