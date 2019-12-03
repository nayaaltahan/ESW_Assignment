//
// Created by Alicja Siudak on 03/12/2019.
//

#ifndef ESW_ASSIGNMENT_TEACHER_H
#define ESW_ASSIGNMENT_TEACHER_H

typedef struct teacher_t {
    int teacher_no;
    char *f_name;
}teacher_t;

teacher_t* createTeacher(int teacher_no, char *f_name);
void destroyTeacher(teacher_t* teacher);
void setTeacherNo(teacher_t* teacher, int teacher_no);
void setTeacherFName(teacher_t* teacher, char *f_name);
int getTeacherNo(teacher_t* teacher);
char* getTeacherFName(teacher_t* teacher);
void print_Teacher_Information(teacher_t* teacher);

#endif //ESW_ASSIGNMENT_TEACHER_H
