// Created by kenza on 24/10/2023.
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#define maxlevel 7

int main(){ //j'ai juste fait des tests randoms pour vérif que chaque fonctions marche
    t_list *list = create_list(maxlevel); //on crée la list avec max level heads
    t_cell *cell = create_cell(5, maxlevel); // on crée une cell, valeur 5 et son nb de niveau max est maxlevel
    InsertCellInList(list, cell, 5); //on insère seulement pour 5 niveaux (0 à 4 du coup)
    cell = create_cell(3, maxlevel);
    InsertCellInList(list, cell, 3);
    cell = create_cell(34, maxlevel);
    InsertCellInList(list, cell, 7);
    cell = create_cell(25, maxlevel);
    InsertCellInList(list, cell, 6);
    cell = create_cell(90, maxlevel);
    InsertHeadList(list, cell, 2);
    ShowAllLevels(list); //on display tout
    return 0;
}