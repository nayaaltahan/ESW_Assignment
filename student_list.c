#include "student_list.h"
#include "linked_list.h"
#include "student.h"
#include <stdio.h>


typedef struct student_list {
	p_list_t list;
} student_list_t;

p_student_list_t student_list_create()
{
	p_student_list_t students = malloc(sizeof(struct student_list));
	students->list = linked_list_create();
	return students;
}

p_student_t get_student_from_list(p_student_list_t self, int i)
{	
	return getElement(self->list, i);
}

int no_of_students(p_student_list_t self)
{
	return noOfItems(self->list);
}

void student_list_destroy(p_student_list_t self)
{
	return linked_list_destroy(self->list);
}

int remove_student_from_list(p_student_list_t self, p_student_t student)
{
	return removeItem(self->list, student);
}

int add_student_to_list(p_student_list_t self, p_student_t student)
{
	return addItem(self->list, student);
}
