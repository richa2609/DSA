#include <iostream>
using namespace std;

#define SIZE 5

class Stack
{
    int arr[SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top == SIZE - 1)
            cout << "Stack Overflow\n";
        else
        {
            arr[++top] = x;
            cout << "Element has been inserted\n";
        }
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow\n";
        else
            cout << arr[top--] << " has been deleted\n";
    }

    void display()
    {
        if (top == -1)
            cout << "the stack is Empty \n";
        else
        {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main()
{
    Stack s;
    int ch, value;

    do
    {
        cout << "\n1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter the choice: ";
        cin >> ch;

        switch (ch)
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
            s.display();
            break;

        case 4:
            cout << "Exiting...\n";
            cout << "Thank you! for using the program.\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (ch != 4);

    return 0;
}