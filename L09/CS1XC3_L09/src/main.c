/**
 * @file main.c
 * @author Prakhar Saxena 
 * @date 27/3/2023
 * @brief Simple program to demonstrate structs using courses and students
 */
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "time.h"
#include "course.h"

/**
 * @brief The main function of the program.
 *
 * First of all the main program generates a course giving it a name and code 
 * and then it generates 20 random students and enrolls them.
 * Then it prints the course info and prints all the students names, their
 * grades, and their average. After that it prints the top student's info and
 * then proceeds to show the number of passing people and their information.
 *
 * @return 0 on success, non-zero on failure.
 */

int main()
{
  srand((unsigned) time(NULL));

  Course *MATH101 = calloc(1, sizeof(Course));
  strcpy(MATH101->name, "Basics of Mathematics");
  strcpy(MATH101->code, "MATH 101");

  for (int i = 0; i < 20; i++) 
    enroll_student(MATH101, generate_random_student(8));
  
  print_course(MATH101);

  Student *student;
  student = top_student(MATH101);
  printf("\n\nTop student: \n\n");
  print_student(student);

  int total_passing;
  Student *passing_students = passing(MATH101, &total_passing);
  printf("\nTotal passing: %d\n", total_passing);
  printf("\nPassing students:\n\n");
  for (int i = 0; i < total_passing; i++) print_student(&passing_students[i]);
  
  return 0;
}

