//
// Created by Alicja Siudak on 03/12/2019.
//
#include <string.h>
#include "../HeaderFiles/assignment.h"
#include <stdio.h>

assignment_t * createAssignment(course_t *course, teacher_t *teacher){
    assignment_t* assignment = (assignment_t*)malloc(sizeof(assignment_t));
    if(assignment == NULL){
        return NULL;
    }
    else(){
        assignment->course = course;
        assignment->teacher = teacher;
        return assignment;
    }
}

void destroyAssignment(assignment_t *assignment){
    free(assignment);
}
void setAssignmentCourse(assignment_t *assignment, course_t *course){
    assignment->course = course;
}
void setAssignmentTeacher(assignment_t *assignment, teacher_t *teacher){
    assignment->teacher = teacher;
}

course_t * getAssignmentCourse(assignment_t *assignment){
    return assignment->course;
}
teacher_t * getAssignmentTeacher(assignment_t *assignment){
    return assignment->teacher;
}
void printAssignmentInformation(assignment_t *assignment){
    printf("A \t %d\t %d\n", assignment->teacher->teacher_no, assignment->course->course_no);
}
