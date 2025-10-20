#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue() { front = 0; rear = -1; }

void Queue::enqueue(int value) {
    if (rear >= 99) { cout << "Queue Full\n"; return; }
    arr[++rear] = value;
}

void Queue::dequeue() {
    if (front > rear) { cout << "Queue Empty\n"; return; }
    front++;
}

void Queue::display() {
    for (int i = front; i <= rear; i++) cout << arr[i] << " ";
    cout << endl;
}