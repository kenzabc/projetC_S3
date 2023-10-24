//
// Created by kenza on 24/10/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "set.h"
// level cells, with the following functions:
//• Create a cell: enter its value and the number of levels in the cell to obtain a pointer
//to the cell.
t_l_cell *create_cell(int value, int max_level)
{
    t_l_cell *cell = malloc(sizeof(t_l_cell));
    cell->value = value;
    cell->next_list = malloc(sizeof(t_l_cell) * max_level);
    return cell;
}
//evel lists, with the following features:
//• Create an empty level list: we'll give the maximum number of levels this list can
//have
//• Insert a cell with levels at the beginning (head) of the list (be careful to take into
//account the number of levels in the cell)
//• Display all the cells in the list for a given level
//• Show all levels in the list
//• Optional: display all levels of the list, by aligning the cells
//• Insert a level cell in the list, at the right place, so that the list remains sorted in
//ascending order
//For this last function, it is possible to make a 'simple' insertion at each level, starting
//from the beginning of the list, but it is possible to be more efficient - it's up to you
//to work out how.
t_l_list *create_l_list(int max_level)
{
    t_l_list *list = malloc(sizeof(t_l_list));
    list->head = NULL;
    list->max_level = max_level;
    return list;
}

void insert_l_cell_at_head(t_l_list *list, t_l_cell * cell, int level)
{
    if (list->head == NULL)
    {
        list->head = cell;
        return;
    }

    return;
}

void cell_in_level(t_l_list *list, int level);
void display_l_list(t_l_list *list);
void insert_l_cell(t_l_list *list, t_l_cell * cell, int level);