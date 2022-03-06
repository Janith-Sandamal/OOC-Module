/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   float marks1,marks2,total,avg;

   printf("Enter Subject 1 Marks : ");
   scanf("%f",&marks1);

   printf("Enter subject 2 Marks : ");
   scanf("%f",&marks2);

   total = marks1 + marks2;

   avg = total/2;

   printf("Avarage of the marks : %.2f",avg);
  
  return 0;
}

