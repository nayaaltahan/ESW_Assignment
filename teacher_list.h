//
// Created by Alicja Siudak on 04/12/2019.
//
#pragma once
#include "teacher.h"

typedef struct teacher_list* p_teacher_list_t;

p_teacher_list_t teacher_list_create();

p_teacher_t get_teacher_from_list(p_teacher_list_t self, int i);

int no_of_teachers(p_teacher_list_t self);

void teacher_list_destroy(p_teacher_list_t self);

int remove_teacher_from_list(p_teacher_t list, p_teacher_t item);

int add_teacher_to_list(p_teacher_list_t list, p_teacher_t item);
