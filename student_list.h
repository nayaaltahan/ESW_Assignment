#pragma once
#include "student.h"

typedef struct student_list* p_student_list_t;

p_student_list_t student_list_create();

p_student_t get_student_from_list(p_student_list_t self, int i);

int no_of_students(p_student_list_t self);

void student_list_destroy(p_student_list_t self);

int remove_student_from_list(p_student_list_t self, p_student_t student);

int add_student_to_list(p_student_list_t self, p_student_t student);



