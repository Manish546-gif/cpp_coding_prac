#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }

    ~Node()
    {
        cout << "Memory is free for node with data " << data << endl;
    }
};

// Print Circular Linked List
void print(Node* head)
{
    if(head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);

    cout << endl;
}

// Length of Circular Linked List
int getLength(Node* head)
{
    if(head == NULL)
        return 0;

    int len = 0;
    Node* temp = head;

    do
    {
        len++;
        temp = temp->next;
    }
    while(temp != head);

    return len;
}

// Insert at Head
void InsertAtHead(Node*& head, Node*& tail, int d)
{
    Node* temp = new Node(d);

    if(head == NULL)
    {
        head = temp;
        tail = temp;
        temp->next = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
        tail->next = head;
    }
}

// Insert at Tail
void InsertAtTail(Node*& head, Node*& tail, int d)
{
    Node* temp = new Node(d);

    if(head == NULL)
    {
        head = temp;
        tail = temp;
        temp->next = temp;
    }
    else
    {
        tail->next = temp;
        temp->next = head;
        tail = temp;
    }
}

// Insert at Position
void InsertAtPosition(Node*& head, Node*& tail, int pos, int d)
{
    if(pos == 1)
    {
        InsertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos - 1 && temp != tail)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp == tail)
    {
        InsertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Delete Node
void DeleteNode(int pos, Node*& head, Node*& tail)
{
    if(head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    // Only one node
    if(head == tail)
    {
        if(pos == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
        }
        else
        {
            cout << "Invalid Position." << endl;
        }
        return;
    }

    // Delete first node
    if(pos == 1)
    {
        Node* temp = head;

        head = head->next;
        tail->next = head;

        temp->next = NULL;
        delete temp;
        return;
    }

    Node* prev = NULL;
    Node* curr = head;
    int cnt = 1;

    while(cnt < pos && curr != tail)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    if(cnt < pos)
    {
        cout << "Invalid Position." << endl;
        return;
    }

    prev->next = curr->next;

    if(curr == tail)
        tail = prev;

    curr->next = NULL;
    delete curr;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtHead(head, tail, 10);
    InsertAtHead(head, tail, 20);
    InsertAtHead(head, tail, 30);

    cout << "After InsertAtHead: ";
    print(head);

    InsertAtTail(head, tail, 40);
    InsertAtTail(head, tail, 50);

    cout << "After InsertAtTail: ";
    print(head);

    InsertAtPosition(head, tail, 3, 25);

    cout << "After InsertAtPosition: ";
    print(head);

    DeleteNode(1, head, tail);

    cout << "After deleting position 1: ";
    print(head);

    DeleteNode(3, head, tail);

    cout << "After deleting position 3: ";
    print(head);

    DeleteNode(getLength(head), head, tail);

    cout << "After deleting last node: ";
    print(head);

    cout << "Length = " << getLength(head) << endl;

    return 0;
}