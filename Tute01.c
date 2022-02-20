/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  float mark1,mark2,average; //declare variables 

  printf ("Enter mark 1 : ");  //input mark 1
  scanf ("%f",&mark1);

  printf ("Enter mark 2 : ");  //input mark 1
  scanf ("%f",&mark2);

  average = (mark1+mark2)/2;  //Calculate average

  printf ("Average mark is : %.2f",average); //display average

  return 0;
}

//comment

