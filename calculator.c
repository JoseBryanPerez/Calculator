#include <stdio.h>


int main()
{
   int num1, num2, result, operator;
   
   printf("Enter your first number: ");
   scanf("%d", &num1);

   printf("Enter your second number:  ");
   scanf("%d", &num2);

   printf("Enter your operator (1 = '+', 2 = '-', 3 = '*', 4 = '/'): ");
   scanf("%d", &operator);

   switch(operator)
   {
    case 1: result = num1 + num2; break;
    case 2: result = num1 - num2; break;
    case 3: result = num1 * num2; break;
    case 4: result = num1 / num2; break;
   }
   
   if (operator == 1)
      printf("The sum of %d + %d is %d.", num1, num2, result);
   else if (operator == 2)
      printf("The difference of %d - %d is %d.", num1, num2, result);
   else if (operator == 3)
      printf("The product of %d * %d is %d.", num1, num2, result);
   else if (operator == 4)
      printf("The quotient of %d / %d is %d.", num1, num2, result);
   else
      printf("Invalid operator input");
}