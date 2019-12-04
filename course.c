//
// Created by Alicja Siudak on 03/12/2019.
//
#include <string.h>
#include "course.h"
#include <stdio.h>

course_t * createCourse(int course_no, char *course_name, int semester_no){
    course_t *course = (course_t*)malloc(sizeof(course_t));
    if(course == NULL){
        return NULL;
    }
    else{
        course->course_no=course_no;
        course->course_name = strdup(course_name);
        course->semester_no=semester_no;
        return course;
    }
}

void destroyCourse(course_t *course){
    free(course->course_name);
    char *course_name = NULL;
    free(course);
}

void setCourseNo(course_t *course, int course_no){
    course->course_no = course_no;
}
void setCourseName(course_t *course, char *course_name){
    course->course_name=course_name;
}
void setSemesterNo(course_t *course, int semester_no){
    course->semeester_no = semester_no;
}
int getCourseNo(course_t *course){
    return course->course_no;
}
char * getCourseName(course_t *course){
    return course->course_name;
}
int getSemesterNo(course_t *course){
    return course->semester_no;
}
void printCourseInformation(course_t *course){
    printf("C \t %s\t %d\t %d\n", course->course_name, course->course_no, course->semester_no);
}





