/**
 * @file student.h
 * @author Prakhar Saxena 
 * @date 27/3/2023
 * @brief It is a header file which contains the _student struct and the 
 * functions that it can use
 */


/**
 * \brief A struct representing a student
 * 
 * This struct contains the first name of a student (max length 50),
 * last name (max length 50) , ID number (max length 11), an array of their grades, the number of grades the
 * student has
 *
 */
typedef struct _student {
  char first_name[50]; 
  char last_name[50]; 
  char id[11];
  double *grades;
  int num_grades; 
} Student;

/**
 * @brief Adds a grade to the given student's grade array.
 *
 * @param student The student to add the grade to.
 * @param grade The grade to add.
 */
void add_grade(Student *student, double grade);

/**
 * @brief Calculates and returns the average grade for the given student.
 *
 * @param student The student to calculate the average for.
 * @return The average grade for the student, or 0.0 if the student has no grades.
 */
double average(Student *student);

/**
 * @brief Prints the details of the given student to stdout.
 *
 * @param student The student to print.
 */
void print_student(Student *student);

/**
 * @brief Generates and returns a random student with the given number of grades.
 *
 * @param grades The number of grades to generate for the student.
 * @return A pointer to the generated student.
 */
Student* generate_random_student(int grades);

