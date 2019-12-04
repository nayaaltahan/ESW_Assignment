//
// Created by Alicja Siudak on 03/12/2019.
//
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include <stdio.h>

student_t* createStudent(int student_no, char* f_name){
    student_t* student = (student_t*)malloc(sizeof(student_t));
    if(student == NULL){
        return NULL;
    }
    else{
        student->student_no=student_no;
        student->f_name = strdup(f_name);
        return student;
    }
}

void destroyStudent(student_t* student){
    free(student->f_name);
    //make sure nobody will use it
    char* f_name = NULL;
    free(student);
}

void setStudentNo(student_t* student, int student_no){
    student->student_no=student_no;
}

void setStudentFName(student_t* student, char* f_name){
    student->f_name = f_name;
}

int getStudentNo(student_t* student){
    return student->student_no;
}

char* getStudentFName(student_t* student){
    return student->f_name;
}

void print_Student_Information(student_t *student)
{
    printf("S \t %s\t %d\n", student->f_name, student->student_no);
}

