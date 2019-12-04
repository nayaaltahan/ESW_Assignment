#pragma once
#include "course.h"

typedef struct course_list* p_course_list_t;

p_course_list_t course_list_create();

p_course_t get_course_from_list(p_course_list_t self, int i);

int no_of_course(p_course_list_t self);

void course_list_destroy(p_course_list_t self);

int remove_course_from_list(p_course_list_t self, p_course_t course);

int add_course_to_list(p_course_list_t self, p_course_t item);



