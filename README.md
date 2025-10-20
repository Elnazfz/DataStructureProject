# Data Structure Project

This project implements several fundamental data structures in C++:

- Linked List  
- Stack  
- Queue  
- Sorting Algorithms (Bubble Sort and Insertion Sort)

---

## Features

1. Linked List  
   - Insert elements (`insert`)  
   - Search elements (`search`)  
   - Display elements (`printList`)  

2. Stack  
   - Push elements (`push`)  
   - Pop elements (`pop`)  
   - Peek top element (`peek`)  
   - Display all elements (`display`)  

3. Queue  
   - Enqueue elements (`enqueue`)  
   - Dequeue elements (`dequeue`)  
   - Display elements (`display`)  

4. Sorting  
   - Sort arrays using Bubble Sort and Insertion Sort  

---

## Usage

1. Project files:
main.cpp
LinkedList.cpp / LinkedList.h
Stack.cpp / Stack.h
Queue.cpp / Queue.h
sorting.cpp / sorting.h

2. Compile the project:
```bash
g++ main.cpp LinkedList.cpp Stack.cpp Queue.cpp sorting.cpp -o app
3. Run the program:

./app
Sample Output

=== Linked List ===
10 20 30 
Search 20: Found

=== Stack ===
15 10 5 
10 5 
Peek: 10

=== Queue ===
1 2 3 
2 3 

=== Sorting ===
Original: 5 2 8 1 3 
Bubble Sorted: 1 2 3 5 8 
Insertion Sorted: 2 4 6 7 9
Note
 • Only source code should be uploaded; do not upload the executable (app.exe).
 • The project can be compiled with C++11 or higher
