/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
    float mark1, mark2, avg;

// get inputs
  printf("Enter the first subject marks : ");
  scanf("%2f", &mark1);

  printf("Enter the second subject marks : ");
  scanf("%2f", &mark2);

// calculation
  avg = (mark1+mark2)/2;

// display outpt
  printf("Average is %.2f \n", avg);
  
  return 0;
}

