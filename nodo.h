#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED




struct nodo {
    void *informacion;
    struct nodo *siguiente;
};

typedef struct nodo Nodo;

Nodo *crearNodo(int tam, void *dirInfo);

#endif // NODO_H_INCLUDED
