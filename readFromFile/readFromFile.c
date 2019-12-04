//
// Created by Alicja Siudak on 04/12/2019.
//

#include "readFromFile.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

FILE *fp;
char buff[255];
int student_number, course_number, teacher_number, semester_number;

void read_from_file(char *filename)
{
    // we use pointer to the file to read it
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        exit(EXIT_FAILURE);
    }

    // as long as it's not the end of the file(eof) we check the format and act on it
    while (!feof(fp))
    {
        if (fscanf(fp, "S %d %s\n", &student_no, buff) == 2)
        {
            //addStudent(student_number, buff);
        }
        else if (fscanf(fp, "T %d %s\n", &teacher_no, buff) == 2)
        {
            //addTeacher(teacher_number, buff);
        }
        else if (fscanf(fp, "C %d %s %d\n", &course_no, buff, &semester_no) == 3)
        {
            //addCourse(course_number, buff, semester_number);
        }
        else if (fscanf(fp, "E %d %d\n", &student_no, &course_no) == 2)
        {
            //enrolStudent(student_number, course_number);
        }
        else if (fscanf(fp, "A %d %d\n", &teacher_no, &course_no) == 2)
        {
            //assignTeacher(teacher_number, course_number);
        }
        else
        {
            fgets(buff, sizeof(buff), fp);
        }
    }
    fclose(fp);
}
