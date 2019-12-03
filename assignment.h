//
// Created by Alicja Siudak on 03/12/2019.
//

#ifndef ESW_ASSIGNMENT_ASSIGNMENT_H
#define ESW_ASSIGNMENT_ASSIGNMENT_H
typedef struct assignment_t {
    course_t *course;
    teacher_t *teacher;
}assignment_t;

assignment_t * createAssignment(course_t *course, teacher_t *teacher);
void destroyAssignment(assignment_t *assignment);
void setAssignmentCourse(assignment_t *assignment, course_t *course);
void setAssignmentTeacher(assignment_t *assignment, teacher_t *teacher);
course_t * getAssignmentCourse(assignment_t *assignment);
teacher_t * getAssignmentTeacher(assignment_t *assignment);
void printAssignmentInformation(assignment_t *assignment);


#endif

