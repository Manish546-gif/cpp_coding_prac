#include <bits/stdc++.h>
using namespace std;

int arr[5];
int capacity = 5;
int queueSize = 0;

bool isFull() {
    return queueSize == capacity;
}

bool isEmpty() {
    return queueSize == 0;
}

void insert(int val) {
    if (isFull()) {
        cout << "Queue is full" << endl;
        return;
    }

    arr[queueSize] = val;
    queueSize++;
}

void display() {
    for (int i = 0; i < queueSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    display();

    return 0;
}