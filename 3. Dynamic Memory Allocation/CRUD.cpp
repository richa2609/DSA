#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insert_at_beginning(int value)
    {
        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }

        cout << "The Node has been inserted successfully!\n";
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "The List is empty.\n";
            return;
        }

        Node *temp = head;
        cout << "Linked List: ";

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void search(int key)
    {
        Node *temp = head;
        int position = 1;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Element found at position: " << position << endl;
                return;
            }
            temp = temp->next;
            position++;
        }

        cout << "The Element not found.\n";
    }

    void delete_node(int key)
    {
        if (head == NULL)
        {
            cout << "The List is empty.\n";
            return;
        }

        if (head->data == key)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "The Node has been deleted successfully!\n";
            return;
        }

        Node *temp = head;
        Node *prev = NULL;

        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "The Element not found.\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "The Node has been deleted successfully!\n";
    }

    void reverse()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
        cout << "Linked list reversed successfully!\n";
    }
};

int main()
{
    LinkedList list;
    int choice, value;

    do
    {
        cout << "\n=====LINKED LIST MENU=====\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Display\n";
        cout << "3. Search\n";
        cout << "4. Delete\n";
        cout << "5. Reverse\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> value;
            list.insert_at_beginning(value);
            break;

        case 2:
            list.display();
            break;

        case 3:
            cout << "Enter the value to be searched: ";
            cin >> value;
            list.search(value);
            break;

        case 4:
            cout << "Enter the value to be deleted: ";
            cin >> value;
            list.delete_node(value);
            break;

        case 5:
            list.reverse();
            break;

        case 0:
            cout << "We are Exiting the program...\n";
            break;

        default:
            cout << "Sorry, Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}