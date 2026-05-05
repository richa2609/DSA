#include <iostream>
using namespace std;

#define SIZE 5

class Queue
{
    int arr[SIZE];
    int front, rear;

public:
    Queue()
    {
        front = rear = -1;
    }

    void enqueue(int x)
    {
        if (rear == SIZE - 1)
        {
            cout << "it is Overflow\n";
        }
        else
        {
            if (front == -1)
                front = 0;
            rear++;
            arr[rear] = x;
            cout << "has been Inserted\n";
        }
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "it is Underflow\n";
        }
        else
        {
            cout << arr[front] << " it has been removed\n";
            front++;
        }
    }

    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "it is an empty queue\n";
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q;
    int ch, value;

    do
    {
        cout << "\n1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            cout << "Enter the value: ";
            cin >> value;
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting...\n";
            cout << "Thank you! for using the program.\n";
            break;
        }
    } while (ch != 4);

    return 0;
}