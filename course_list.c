#include "course_list.h"
#include "linked_list.h"
#include <stdio.h>
#include "course.h"

typedef struct course_list {
	p_list_t list;
}course_list_t;

p_course_list_t course_list_create()
{
	p_course_list_t courses = malloc(sizeof(struct course_list));
	courses->list = linked_list_create();
	return courses;
}

p_course_t get_course_from_list(p_course_list_t self, int i)
{
	return get_element_from_list(self->list, i);
}

int no_of_course(p_course_list_t self)
{
	return no_of_items_in_list(self->list);
}

void course_list_destroy(p_course_list_t self)
{
	linked_list_destroy(self->list);
}

int remove_course_from_list(p_course_list_t self, p_course_t course)
{
	return remove_item_from_list(self->list, course);
}

int add_course_to_list(p_course_list_t self, p_course_t course)
{
	return add_item_to_list(self->list, course);
}
