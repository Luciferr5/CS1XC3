/**
 * @file course.h
 * @author Prakhar Saxena 
 * @date 27/3/2023
 * @brief It is a header file which contains the _course struct and the
 * functions that it can use
 */



#include "student.h"
#include <stdbool.h>

/**
 * \brief This struct is used to represent a course
 *
 * The struct _course stores the the name of the course,
 * the course code, an array of all the students enrolled in the course,
 * and the total number of students in that course
 * 
 */
typedef struct _course
{
  char name[100]; 
  char code[10];
  Student *students; 
  int total_students; 
} Course;

/**
 * @brief Enrolls a student in the given course.
 *
 * @param course The course to enroll the student in.
 * @param student The student to enroll.
 */
void enroll_student(Course *course, Student *student);

/**
 * @brief Prints the details of the given course to stdout.
 *
 * @param course The course to print.
 */
void print_course(Course *course);

/**
 * @brief Returns the top-performing student in the given course.
 *
 * @param course The course to search for the top-performing student.
 * @return A pointer to the top-performing student, or NULL if there are no students enrolled in the course.
 */
Student *top_student(Course* course);

/**
 * @brief Returns an array of all students who passed the given course, and sets the total number of passing students in the given integer pointer.
 *
 * @param course The course to search for passing students.
 * @param total_passing A pointer to an integer that will hold the total number of passing students.
 * @return An array of pointers to passing students, or NULL if there are no passing students.
 */
Student *passing(Course* course, int *total_passing);


