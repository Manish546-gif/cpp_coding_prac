#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;

        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }

        cout << "Memory free for node with data " << value << endl;
    }
};

void InsertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node*& tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node*& head, Node*& tail, int pos, int data) {

    if (pos == 1) {
        InsertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < pos - 1) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) {
        InsertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void DeleteNode(int pos, Node*& head, Node*& tail) {

    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    // Delete first node
    if (pos == 1) {
        Node* temp = head;
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

    if (curr == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }

    prev->next = curr->next;

    if (curr->next == NULL)
        tail = prev;

    curr->next = NULL;   // Break the link
    delete curr;
}

void print(Node*& head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(head, tail, 4, 22);
    print(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    DeleteNode(1, head, tail);
    print(head);

    DeleteNode(3, head, tail);
    print(head);

    // Delete remaining list
    delete head;

    return 0;
}