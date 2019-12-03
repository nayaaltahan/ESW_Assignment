//
// Created by Alicja Siudak on 03/12/2019.
//

#include <string.h>
#include "../HeaderFiles/teacher.h"
#include <stdio.h>

teacher_t* createTeacher(int teacher_no, char *f_name){
    teacher_t* teacher = (teacher_t*)malloc(sizeof(teacher_t));
    if(teacher == NULL){
        return NULL;
    }
    else{
        teacher->teacher_no = teacher_no;
        teacher->f_name = strdup(f_name);
        return teacher;l
    }
}

void destroyTeacher(teacher_t* teacher){
    free(teacher->f_name);
    char* f_name=NULL;
    free(teacher);

}
void setTeacherNo(teacher_t* teacher, int teacher_no){
 teacher->teacher_no = teacher_no;
}

void setTeacherFName(teacher_t* teacher, char *f_name){
    teacher->f_name = f_name;
}

int getTeacherNo(teacher_t* teacher){
    return teacher->teacher_no;
}

char* getTeacherFName(teacher_t* teacher){
    return teacher->f_name;
}

void print_Teacher_Information(teacher_t* teacher){
    printf("T \t %s\t %d\n", teacher->f_name, teacher->_no);
}