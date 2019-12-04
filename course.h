//
// Created by Alicja Siudak on 03/12/2019.
//
#ifndef ESW_ASSIGNMENT_COURSE_H
#define ESW_ASSIGNMENT_COURSE_H

typedef course_t{
//C course_number course_name semester_number
int course_no;
char* course_name;
int semester_no;
}course_t;

course_t* createCourse(int course_no, char* course_name, int semester_no);
void destroyCourse(course_t* course);
void setCourseNo(course_t* course, int course_no);
void setCourseName(course_t* course, char* course_name);
void setSemesterNo(course_t* course, int semester_no);
int getCourseNo(course_t* course);
char* getCourseName(course_t* course);
int getSemesterNo(course_t* course);
void print_Course_Information(course_t *course);


#endif //ESW_ASSIGNMENT_COURSE_H