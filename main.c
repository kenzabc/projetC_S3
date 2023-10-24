//
// Created by kenza on 24/10/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "set.h"

int main()
{
    t_l_list *list = create_l_list(5);
    t_l_cell *cell = create_cell(5, 5);
    insert_l_cell_at_head(list, cell, 5);
    display_l_list(list);

    return 0;
}
