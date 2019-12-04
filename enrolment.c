//
// Created by Alicja Siudak on 03/12/2019.
//
#include <string.h>
#include "course.h"
#include "student.h"
#include "enrolment.h"
#include <stdio.h>

enrolment_t * constructEnrolment(course_t *course, student_t *student){
    enrolment_t *enrolment = (enrolment_t*)malloc(sizeof(enrolment_t));
    if (enrolment == NULL)
    {
        return NULL;
    }
    else
    {
        enrolment->course = course;
        enrolment->student = student;
        return enrolment;
    }
}
void destroyEnrolment(enrolment_t *enrolment){
    free(enrolment);
}
void setEnrolmentCourse(enrolment_t *enrolment, course_t *course){
    enrolment->course = course;
}
void setEnrolmentStudent(enrolment_t *enrolment, student_t *student){
    enrolment->student = student;
}
course_t * getCourseOfEnrolment(enrolment_t *enrolment){
    return enrolment->course;
}
student_t * getStudentOfEnrolment(enrolment_t *enrolment){
    return enrolment->student;
}
void printEnrolmentInformation(enrolment_t *enrolment){
    printf("E \t %d\t %d\n", enrolment->student->student_no, enrolment->course->course_no);
}


