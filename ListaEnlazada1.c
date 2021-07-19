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

    /* Adición de un nodo por cola */
    aux = malloc(sizeof(Struct Nodo));
    lista->sig->sig = aux;
    aux->info = 2;
    aux->sig = NULL;

    /* Adición de un nodo por cola con bucle */
    struct Nodo *nuevo;
    aux = lista;
    while (aux->sig != NULL) { /* Busca último nodo de la lista */
        aux = aux->sig;
    }
    nuevo = malloc(sizeof(struct Nodo)));
    nuevo->info = 2;
    nuevo->sig = NULL;
    aux->sig = nuevo;

    /* Adición de un nodo por cola con bucle for*/
    for (aux = lista; aux->sig != NULL; aux = aux->sig);
    nuevo = malloc(sizeof(struct Nodo));
    nuevo->info = 2;
    nuevo->sig = NULL;
    aux->sig = nuevo;

    return 0;
}