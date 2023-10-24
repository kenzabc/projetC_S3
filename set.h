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
    t_l_cell *head[max_level];
    int max_level;
} t_l_list;

t_l_list *create_l_list(int max_level);
t_l_cell *create_cell(int value, int max_level);
void insert_l_cell_at_head(t_l_list *list, t_l_cell * cell, int level);
void cell_in_level(t_l_list *list, int level);
void display_l_list(t_l_list *list);
void insert_l_cell(t_l_list *list, t_l_cell * cell, int level);

#endif //PROJETC_S3_SET_H
