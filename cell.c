// Created by Max on 01/11/2023.
#include "cell.h"
#include <stdlib.h>
#include <stdio.h>

// level cells, with the following functions:
//• Create a cell: enter its value and the number of levels in the cell to obtain a pointer to the cell.
t_cell *create_cell(int value, int max_value){
    t_cell *cell = (t_cell *)malloc (sizeof (t_cell*)); //We initialize the pointer
    cell->max_level = max_value;
    cell->value = value; //we associate the value given to the value in the structure cell
    cell->pointers = (t_cell **) malloc(max_value*sizeof (t_cell*)); //the 'pointers' points to the address of the array
    return cell;
}