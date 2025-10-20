#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList() { head = nullptr; }

void LinkedList::insert(int value) {
    Node* newNode = new Node{ value, nullptr };
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void LinkedList::printList() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool LinkedList::search(int value) {
    Node* temp = head;
    while (temp) {
        if (temp->data == value) return true;
        temp = temp->next;
    }
    return false;
}
