//
// Created by kenza on 24/10/2023.
//

#ifndef PROJETC_S3_SET_H
#define PROJETC_S3_SET_H
#include "set.c"

typedef struct s_d_cell
{
    int value;
    struct s_d_cell *next_0;
    struct s_d_cell *next_1;
} t_d_cell;

typedef struct s_d_list
{
    t_d_cell *head_0;
    t_d_cell *head_1;
} t_d_list;

typedef struct s_l_cell
{
    int value;
    struct s_l_cell *next_list[max_level];
} t_l_cell;

typedef struct s_l_list
{
    t_l_cell *head;
    int max_level;
} t_l_list;


#endif //PROJETC_S3_SET_H
