/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int no1, int no2); // function prototype
int maximum(int no1, int no2); // function prototype
int multiply(int no1, int no2); // function prototype

int main() {

   int no1, no2; //declare variables 

   printf("Enter a value for no 1 : "); //get number 1
   scanf("%d", &no1);

   printf("Enter a value for no 2 : "); //get number 2
   scanf("%d", &no2);

   printf("%d ", minimum(no1, no2));  //display minimum number
   printf("%d ", maximum(no1, no2));  //display maximum number
   printf("%d ", multiply(no1, no2)); //display multiplication of numbers

   return 0;
}

int minimum(int no1, int no2) //function implementation
{
  if (no1<no2)
    return no1;
  else
    return no2;  
}

int maximum(int no1, int no2) //function implementation
{
  if (no1<no2)
    return no2;
  else
    return no1; 
}

int multiply(int no1, int no2) //function implementation
{
  return no1*no2;
}
//commit
