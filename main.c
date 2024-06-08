#include <stdio.h>
#include "double_list.h"

int main() {
    DoublyLinkedList* list = create_list();

    printf("Insertando nodos al inicio:\n");
    insert_at_beginning(list, 10);
    insert_at_beginning(list, 20);
    print_list_forward(list);  // Expected: 20 10

    printf("Insertando nodos al final:\n");
    insert_at_end(list, 30);
    insert_at_end(list, 40);
    print_list_forward(list);  // Expected: 20 10 30 40

    printf("Insertando nodo en posición específica:\n");
    insert_at_position(list, 25, 2);
    print_list_forward(list);  // Expected: 20 10 25 30 40

    printf("Eliminando nodo con valor 10:\n");
    delete_node(list, 10);
    print_list_forward(list);  // Expected: 20 25 30 40

    printf("Buscando nodo con valor 30:\n");
    Node* found = search_node(list, 30);
    if (found) {
        printf("Nodo encontrado: %d\n", found->data);  // Expected: Nodo encontrado: 30
    } else {
        printf("Nodo no encontrado\n");
    }

    printf("Recorriendo la lista hacia adelante:\n");
    print_list_forward(list);  // Expected: 20 25 30 40

    printf("Recorriendo la lista hacia atrás:\n");
    print_list_backward(list);  // Expected: 40 30 25 20

    free_list(list);
    return 0;
}