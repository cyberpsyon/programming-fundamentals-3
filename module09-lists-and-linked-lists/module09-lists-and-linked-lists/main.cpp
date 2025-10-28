// Author: Ben Mickens
// Date: 10-26-2025
// Purpose: Main program to test the Singly Linked List with different data types


#include "SinglyLinkedList.h"
#include "Student.h"  // Include Student class if you want to use Student objects
int main() {
    //*********** Integers ***************   
   // TODO: Create a singly linked list of integers
	SinglyLinkedList<int> integerList;
    integerList.insertAtHead(86);
	integerList.insertAtHead(75);
	integerList.insertAtTail(30);
	integerList.insertAtTail(9);

    cout << "Integer List: ";
    // TODO: Display linked list of integers
    integerList.displayList();

    // TODO: Remove an element from the integer list
	integerList.removeByValue(75);

    cout << "After removal: ";
    // TODO: Display linked list of integers
	integerList.displayList();

    // TODO: Clear the integer list
	integerList.clear();

    //*********** Strings ***************   
    // TODO: Create a singly linked list of strings
	SinglyLinkedList<string> stringList;
	stringList.insertAtHead("Call");
	stringList.insertAtHead("Jenny");
	stringList.insertAtTail("now!");

    cout << "String List: ";
    // TODO: Display linked list of strings    
	stringList.displayList();

    // TODO: Clear the string list
	stringList.clear();

     //*********** Students ***************   
    // TODO: Create a singly linked list of Student objects  
	SinglyLinkedList<Student> studentList;

   // TODO: Create student objects 
   
	Student student1("Mickey", "Mouse", "MM00123456", 3.5);
	Student student2("Donald", "Duck", "DD00654321", 3.8);
	Student student3("Minnie", "Mouse", "MM00135791", 3.9);

   // TODO: Insert students into the list
	studentList.insertAtHead(student1);
	studentList.insertAtTail(student2);
	studentList.insertAtTail(student3);

   // TODO: Display the student list
    cout << "\nStudent List:" << endl;
	studentList.displayList();

    // TODO: Clear the student list
	studentList.clear();
    return 0;
}
