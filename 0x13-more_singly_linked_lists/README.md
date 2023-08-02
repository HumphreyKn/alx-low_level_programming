# Singly Linked Lists
## What is Linked List
A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

Linked List forms a series of connected nodes, where each node stores the data and the address of the next node.
	- **Node Structure**: A node in a linked list typically consists of two components:
		- **Data**: It holds the actual value or data associated with the node.
		- **Next Pointer**: It stores the memory address (reference) of the next node in the sequence.
	- **Head and Tail**: The linked list is accessed through the head node, which points to the first node in the list. The last node in the list points to NULL or nullptr, indicating the end of the list. This node is known as the tail node.

There are mainly three types of linked lists namely:
	- Single- linked list
	- Double linked list
	- Circular linked lists

### Singly linked lists
In a singly linked list, each node contains a reference to the next node in the reference. Traversing a singly linked list is done in a foward direction.

### Doubly linked lists
In a doubly linked list, each node contains references to both the next and previous nodes. This allows for traversal in both forward and backward directions, but it requires additional memory for the backward reference.

### Circular linked lists
In a circular linked list, the last node points back to the head node, creating a circular structure. It can be either singly or doubly linked.

## Linked lists vs Arrays
Linked lists and arrays are both data structures used to store collections of elements, but they differ in their underlying organization, memory allocation, and performance characteristics. Let's explore the key differences between linked lists and arrays:
	- **Memory allocation**:
		- Arrays: Arrays use contiguous blocks of memory to store elements. When you create an array, a single block of memory is allocated to hold all the elements in a sequential manner.
		- Linked lists: Linked lists, on the other hand, do not require contiguous memory allocation. Instead, each element (node) in the linked list contains both the data and a reference (or pointer) to the next node in the sequence.

	- **Insertion and Deletion**:
		- Arrays: Insertion and deletion operations in arrays can be costly, especially in the middle of the array. If you want to insert an element at the beginning or middle of an array, you may need to shift all the subsequent elements to accommodate the new element. Similarly, deleting an element requires shifting the subsequent elements to fill the gap left by the deleted element.
		- Linked lists: Linked lists shine in terms of insertion and deletion. Since there's no need to maintain contiguous memory, inserting or deleting an element in a linked list is simply a matter of updating the pointers in the nodes to "skip" the element being inserted or removed.

	- **Access time (Random Access)**:
		- Arrays: Arrays offer constant time (O(1)) access to elements based on their index. You can directly access any element by using its index, as the elements are stored sequentially in memory.
		- Linked lists: Linked lists do not offer constant-time random access. To access an element in a linked list, you must traverse the list from the beginning (head) until you reach the desired element. As a result, accessing elements in linked lists is O(n) in the worst case, where n is the number of elements in the list.

	- **Memory overhead**:
        	- Arrays: Arrays have a lower memory overhead since they only store the data elements.
        	- Linked lists: Linked lists have a higher memory overhead because they store both data and pointers/references to the next node.

	- **Dynamic resizing**:
		- Arrays: In many programming languages, arrays have a fixed size once they are created. To resize an array, you typically need to create a new array and copy elements from the old array to the new one.
		- Linked lists: Linked lists can easily grow or shrink dynamically as elements are added or removed without needing to reallocate memory.

