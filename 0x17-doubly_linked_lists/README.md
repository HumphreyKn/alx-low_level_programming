# Doubly Linked List in C

A doubly linked list is a linear data structure in which each node contains a data element and two pointers, one pointing to the previous node and another pointing to the next node. This README provides a basic introduction to implementing a doubly linked list in C.

## Table of Contents

1. [Prerequisites](#prerequisites)
2. [Structure of a Doubly Linked List Node](#structure-of-a-doubly-linked-list-node)
3. [Basic Operations](#basic-operations)
   - [Initialization](#initialization)
   - [Insertion](#insertion)
   - [Deletion](#deletion)
   - [Traversal](#traversal)
4. [Example Code](#example-code)
5. [Contributing](#contributing)
6. [License](#license)

## Prerequisites

Before working with a doubly linked list in C, you should have a basic understanding of C programming, including pointers and memory allocation.

## Structure of a Doubly Linked List Node

A doubly linked list node typically contains the following components:

```c
struct Node {
    int data;               // Data stored in the node
    struct Node* prev;      // Pointer to the previous node
    struct Node* next;      // Pointer to the next node
};
```

## Basic Operations

### Initialization

To create an empty doubly linked list, you can define a pointer to the head and initialize it as follows:

```c
struct Node* head = NULL;
```

### Insertion

#### 1. Insertion at the Beginning

To insert a new node at the beginning of the list:

```c
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = newData;
newNode->prev = NULL;
newNode->next = head;
if (head != NULL)
    head->prev = newNode;
head = newNode;
```

#### 2. Insertion at the End

To insert a new node at the end of the list:

```c
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = newData;
newNode->next = NULL;
if (head == NULL) {
    newNode->prev = NULL;
    head = newNode;
} else {
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}
```

### Deletion

#### 1. Deletion at the Beginning

To delete the first node from the list:

```c
if (head != NULL) {
    struct Node* temp = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    free(temp);
}
```

#### 2. Deletion at the End

To delete the last node from the list:

```c
if (head != NULL) {
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    if (temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL;
    free(temp);
}
```

### Traversal

To traverse the doubly linked list from the beginning to the end:

```c
struct Node* current = head;
while (current != NULL) {
    // Process or display current node's data
    current = current->next;
}
```

## Example Code

Here's a simple example of a doubly linked list in C:

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;

    // Insertion at the beginning
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 42;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;

    // Traversal
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Clean up (free memory)
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
```

## Contributing

Contributions to this README are welcome. If you find any errors or have suggestions for improvement, please submit a pull request.

