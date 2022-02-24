/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float avg = 0;

  printf ("Enter marks for the subject 1 :");
  scanf ("%d", &mark1);
  printf ("Enter marks for the subject 2 :");
  scanf ("%d", &mark2);

  avg = (float) (mark1+mark2)/2.0;
  printf ("The average marks is : %.2f\n", avg);
  
  return 0;
}

