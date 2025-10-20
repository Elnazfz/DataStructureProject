#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
    int arr[100];
    int front, rear;
public:
    Queue();
    void enqueue(int value);
    void dequeue();
    void display();
};

#endif