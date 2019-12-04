//
// Created by Alicja Siudak on 04/12/2019.
//
#include "teacher_list.h"
#include "linked_list.h"
#include "teacher.h"
#include <stdio.h>


typedef struct teacher_list {
    p_list_t list;
} teacher_list_t;

p_teacher_list_t teacher_list_create()
{
    p_teacher_list_t teachers = malloc(sizeof(struct teacher_list));
    teachers->list = linked_list_create();
    return teachers;
}

p_teacher_t get_teacher_from_list(p_teacher_list_t self, int i)
{
    return get_element_from_list(self->list, i);
}

int no_of_teacher(p_teacher_list_t self)
{
    return no_of_items_in_list(self->list);
}

void teacher_list_destroy(p_teacher_list_t self)
{
    return linked_list_destroy(self->list);
}

int remove_teacher_from_list(p_teacher_list_t self, p_teacher_t teacher)
{
    return remove_item_from_list(self->list, teacher);
}

int add_teacher_to_list(p_teacher_list_t self, p_teacher_t teacher)
{
    return add_item_to_list(self->list, teacher);
}
