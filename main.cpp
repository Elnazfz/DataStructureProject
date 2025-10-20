#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "sorting.h"
using namespace std;

int main() {
    cout << "=== Linked List ===\n";
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.printList();
    cout << "Search 20: " << (list.search(20) ? "Found" : "Not Found") << endl;

    cout << "\n=== Stack ===\n";
    Stack s;
    s.push(5); s.push(10); s.push(15);
    s.display();
    s.pop();
    s.display();
    cout << "Peek: " << s.peek() << endl;

    cout << "\n=== Queue ===\n";
    Queue q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();

    cout << "\n=== Sorting ===\n";
    int arr[] = { 5,2,8,1,3 };
    int n = 5;
    cout << "Original: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr, n);
    cout << "Bubble Sorted: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int arr2[] = { 9,4,6,2,7 };
    int n2 = 5;
    insertionSort(arr2, n2);
    cout << "Insertion Sorted: ";
    for (int i = 0; i < n2; i++) cout << arr2[i] << " ";
    cout << endl;

    return 0;
}