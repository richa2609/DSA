#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    int id;
    string name;

    Student(int i, string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main()
{
    vector<Student> students;
    int choice;

    do
    {
        cout << "\n---Student Management System---\n";
        cout << "1. Add the Student\n";
        cout << "2. Display All the Students\n";
        cout << "3. Search the Student by ID\n";
        cout << "4. Remove the Student by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string name;

            cout << "Enter the Student ID: ";
            cin >> id;
            cout << "Enter the Student Name: ";
            cin >> name;

            students.push_back(Student(id, name));
            cout << "Student has been added successfully!\n";
        }

        else if (choice == 2)
        {
            if (students.empty())
            {
                cout << "Students not found!\n";
            }
            else
            {
                for (int i = 0; i < students.size(); i++)
                {
                    students[i].display();
                }
            }
        }

        else if (choice == 3)
        {
            int id, found = 0;
            cout << "Enter the ID to be searched: ";
            cin >> id;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].id == id)
                {
                    students[i].display();
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student not found!\n";
            }
        }

        else if (choice == 4)
        {
            int id, found = 0;
            cout << "Enter ID to be removed: ";
            cin >> id;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].id == id)
                {
                    students.erase(students.begin() + i);
                    cout << "Student is removed successfully!\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student not found!\n";
            }
        }

    } while (choice != 5);

    cout << "Program has been exited.\n";
    return 0;
}