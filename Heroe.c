#include <stdio.h>
#include <stdlib.h>
#include "Heroe.h"

void leerHeroe(Heroe *h){
    printf("Ingresa el nombre de tu heroe: ");
    scanf("%s", h->nombre);
    printf("Ingresa la vida del heroe: ");
    scanf("%d", &(h->vida));
    printf("Ingresa el nivel de ataque: ");
    scanf("%d", &(h->ataque));
}

void imprime(Heroe *h){
    printf("Nombre: %s\n", h->nombre);
    printf("Vida: %d\n", h->vida);
    printf("Ataque: %d\n", h->ataque);
}
