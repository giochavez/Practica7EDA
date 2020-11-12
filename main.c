#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#include "Heroe.h"

int main()
{
    Heroe unHeroe;
    Lista misHeroes;
    iniciarLista(&misHeroes, sizeof(Heroe));
    leerHeroe(&unHeroe);
    agregarNodoInicio(&misHeroes, &unHeroe);
    leerHeroe(&unHeroe);
    agregarNodoInicio(&misHeroes, &unHeroe);
    leerHeroe(&unHeroe);
    agregarNodoInicio(&misHeroes, &unHeroe);
    leerHeroe(&unHeroe);
    agregarNodoInicio(&misHeroes, &unHeroe);

    recorre(&misHeroes, imprime);

    return 0;
}
