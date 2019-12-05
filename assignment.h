//
// Created by Alicja Siudak on 03/12/2019.
//

#ifndef ESW_ASSIGNMENT_ASSIGNMENT_H
#define ESW_ASSIGNMENT_ASSIGNMENT_H

#include "linked_list.h"


typedef struct assignment_t* p_assignment_t;

typedef struct assignment_t {
	course_t* course;
	teacher_t* teacher;
}assignment_t;

p_list_t create_assignment_list();
p_assignment_t* createAssignment(course_t* course, teacher_t* teacher);
void destroyAssignment(p_assignment_t* assignment);
void setAssignmentCourse(p_assignment_t* assignment, course_t* course);
void setAssignmentTeacher(p_assignment_t* assignment, teacher_t* teacher);
course_t* getAssignmentCourse(p_assignment_t* assignment);
teacher_t* getAssignmentTeacher(p_assignment_t* assignment);
void printAssignmentInformation(p_assignment_t* assignment);

void add_assignment_to_list(p_assignment_t assignment);
void remove_assignment_from_list(p_assignment_t assignment);

#endif