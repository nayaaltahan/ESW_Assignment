//
// Created by Alicja Siudak on 03/12/2019.
//

#ifndef ESW_ASSIGNMENT_STUDENT_H
#define ESW_ASSIGNMENT_STUDENT_H

#include "linked_list.h"


typedef struct student_t* p_student_t;

typedef struct student_t {
    int student_no;
    char *f_name;
}student_t;

p_list_t create_student_list();
p_student_t createStudent(int student_no, char *f_name);
void destroyStudent(p_student_t student);
void setStudentNo(p_student_t student, int student_no);
void setStudentFName(p_student_t student, char *f_name);
int getStudentNo(p_student_t student);
char* getStudentFName(p_student_t student);
void print_Student_Information(p_student_t student);

void add_to_student_list(p_student_t student);
void remove_from_student_list()

#endif //ESW_ASSIGNMENT_STUDENT_H


