#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertBegin(int r)
{
    Node *n = new Node();
    n->data = r;
    n->next = head;
    head = n;
}

void insertEnd(int r)
{
    Node *n = new Node();
    n->data = r;
    n->next = NULL;

    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = n;
}

void deleteBegin()
{
    if (head == NULL)
    {
        cout << "It is an empty list\n";
        return;
    }

    Node *temp = head;
    head = head->next;
    cout << temp->data << " it has been removed\n";
    delete temp;
}

void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    int ch, value;

    do
    {
        cout << "\n1. Insert  Begin\n";
        cout << "2. Insert End\n";
        cout << "3. Delete Begin\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter the choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> value;
            insertBegin(value);
            break;
        case 2:
            cout << "Enter the value: ";
            cin >> value;
            insertEnd(value);
            break;
        case 3:
            deleteBegin();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Exiting...\n";
            cout << "Thank you! for using the program.\n";
            break;
        }

    } while (ch != 5);

    return 0;
}