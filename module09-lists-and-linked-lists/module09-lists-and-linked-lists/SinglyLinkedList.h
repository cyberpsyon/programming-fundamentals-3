// Author: Ben Mickens
// Date: 10-26-2025
// Purpose: Definition and implementation of a template Singly Linked List class 
#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H
#include <iostream>
using namespace std;

// Template class for Node
template <typename T>
class Node {
public:
    T data;       // The data stored in the node (can be any type)
    Node* next;   // Pointer to the next node in the list
    // TODO: Define the constructor for the Node template class
    Node(T value) : data(value), next(nullptr) {}
};
// Template class for Singly Linked List
template <typename T>
class SinglyLinkedList {
private:
    Node<T>* head;  // Pointer to the head of the list

public:
    // Implemention of the constructor to initialize an empty list
    SinglyLinkedList() : head(nullptr) {}

    // Implemention of destructor to delete all nodes in the list
    ~SinglyLinkedList() {
        clear();  // Ensure all nodes are deleted when the list is destroyed
    }
    // TODO: Implement insertAtHead method
    
    void insertAtHead(T value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
		cout << "Element inserted at head: " << value << endl;
	}

    // TODO: Implement insertAtTail method
    
    void insertAtTail(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = newNode;
        } else {
            Node<T>* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        cout << "Element inserted at tail: " << value << endl;
	}

    // Implemention of the removeByValue method
    void removeByValue(T value) {
        if (!head) return;
        // If the element to remove is the head
        if (head->data == value) {
            Node<T>* nodeToDelete = head;
            head = head->next;
            delete nodeToDelete;
            cout << "Element removed: " << value << endl;
            return;
        }
        // Traverse the list to find the element
        Node<T>* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }
        if (current->next != nullptr) {
            Node<T>* nodeToDelete = current->next;
            current->next = nodeToDelete->next;
            delete nodeToDelete;
            cout << "Element removed: " << value << endl;
        }
        else {
            cout << "Element not found: " << value << endl;
        }
    }
    // Implemention of displayList method
    void displayList() const {
        Node<T>* current = head;
        while (current != nullptr) {
            cout << current->data << " ";  // Assumes operator<< is defined for type T
            current = current->next;
        }
        cout << endl;
    }
    // TODO: Implement clear method
    void clear() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* nodeToDelete = current;
            current = current->next;
            delete nodeToDelete;
        }
        head = nullptr;
        cout << "List cleared." << endl;
	}
};
#endif /* SINGLYLINKEDLIST_H */