#include <stdio.h>

struct Nodo {
    int info;
    struct Nodo *sig;
};

int main() {
    struct Nodo *lista = NULL, *aux;
    lista = malloc(sizeof(struct Nodo));

    lista->info = 8;
    lista->sig = NULL;

    // Adición de un nodo por cabeza
    aux = lista;
    lista = malloc(sizeof(struct Nodo));
    lista->info = 3;
    lista->sig = aux;
    aux = NULL;

    /* Adición de un nodo por cola con bucle for*/
    for (aux = lista; aux->sig != NULL; aux = aux->sig);
    nuevo = malloc(sizeof(struct Nodo));
    nuevo->info = 2;
    nuevo->sig = NULL;
    aux->sig = nuevo;

    // Eliminar primer nodo de la lista
    aux = lista->sig;
    free(lista);
    lista = aux;

    return 0;
}