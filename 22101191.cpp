#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

Node *head = nullptr;

void insertTop(int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertEnd(int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertMiddle(int val, int pos)
{
    Node *newNode = new Node(val);

    if (pos <= 1 || head == nullptr)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int currentPos = 1; currentPos < pos - 1 && temp->next != nullptr; currentPos++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(int val)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }

    if (head->data == val)
    {
        Node *toDelete = head;
        head = head->next;
        delete toDelete;
        cout << "Deleted head node with value " << val << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr && temp->next->data != val)
    {
        temp = temp->next;
    }

    if (temp->next == nullptr)
    {
        cout << "Value not found in list." << endl;
    }
    else
    {
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        cout << "Deleted node with value " << val << endl;
    }
}

void displayList()
{
    Node *temp = head;
    cout << "List: ";
    while (temp != nullptr)
    {
        cout << "[" << temp->data << "] -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    cout << "Linked List Operations" << endl;
    insertEnd(20);
    insertEnd(30);
    insertEnd(50);
    insertEnd(70);
    insertEnd(90);
    displayList();
    int choice, val, pos;

    while (true)
    {
        cout << "\nMenu:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at position\n";
        cout << "4. Delete node\n";
        cout << "5. Display list\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert at beginning: ";
            cin >> val;
            insertTop(val);
            break;
        case 2:
            cout << "Enter value to insert at end: ";
            cin >> val;
            insertEnd(val);
            break;
        case 3:
            cout << "Enter value and position to insert: ";
            cin >> val >> pos;
            insertMiddle(val, pos);
            break;
        case 4:
            cout << "Enter value to delete: ";
            cin >> val;
            deleteNode(val);
            break;
        case 5:
            displayList();
            break;
        case 6:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}