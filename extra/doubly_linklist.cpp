#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
        int val = this->data;
        if(next != NULL){
           delete next;
           next = NULL; 
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
};
// treversing the link list
void print(Node *&head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// getting the length of the link list
int getLenght(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node *&head, Node *&tail, int data)
{
    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void InsertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    if (pos == 1)
    {
        InsertAtHead(head, tail, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        InsertAtTail(tail, head, data);
        return;
    }
    // crearing node to insert
    Node *nodetoinsert = new Node(data);

    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
void DeleteNode(int pos, Node*& head, Node*& tail) {

    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    // Delete first node
    if (pos == 1) {
        Node* temp = head;
        temp->next->prev = NULL;
        head = head->next;
        temp->next = NULL;   // Break the link
        delete temp;

        if (head == NULL)
            tail = NULL;

        return;
    }

    Node* prev = NULL;
    Node* curr = head;
    int cnt = 1;

    while (cnt < pos && curr != NULL) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;
    // Break the link
    delete curr;
}

int main()
{
    //    Node* node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << getLenght(head) << endl;
    InsertAtHead(head, tail, 23);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    InsertAtHead(head, tail, 13);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    InsertAtHead(head, tail, 26);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    InsertAtTail(tail, head, 34);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    InsertAtPosition(head, tail, 56, 3);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
     DeleteNode(4,head,tail);
     print(head);
    return 0;
}