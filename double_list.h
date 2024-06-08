// double_list.h
#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct DoublyLinkedList {
    Node* head;
    Node* tail;
} DoublyLinkedList;

// Funciones de la lista doblemente enlazada
DoublyLinkedList* create_list();
void insert_at_beginning(DoublyLinkedList* list, int data);
void insert_at_end(DoublyLinkedList* list, int data);
void insert_at_position(DoublyLinkedList* list, int data, int position);
void delete_node(DoublyLinkedList* list, int data);
Node* search_node(DoublyLinkedList* list, int data);
void print_list_forward(DoublyLinkedList* list);
void print_list_backward(DoublyLinkedList* list);
void free_list(DoublyLinkedList* list);

#endif // DOUBLE_LIST_H