#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_CH 100
#define NUM_CH MAX_CH/2


int numCheck(char ch) {
   return (int)ch >= '0' && ch <= '9';

}

int checkOp(char op) {
   return op == '+' || op == ' - ' || op == ' * ' || op == '/';
}

int main() {
   char input[MAX_CH],
      numStr1[NUM_CH], numStr2[NUM_CH],
      opearator = '\0';
   int i = 0, j = 0;

   printf("Enter a simple math formula (12+24)");

   while (input[i] != '\0' && numCheck(input[i])) {
      numStr1[j++] = input[i++];
   }
   numStr1[j] = '\0';
   return 0;

   if (checkOp(input[i])) {
      opearator =input[i++];

   }
   else
   {
      printf("Error: invaid operator \n");

   }

   j = 0;//초기화!!
   while (input[i] != '\0' && numCheck(input[i])) {
      numStr2[j++] = input[i++];
   }
   numStr2[j] = '\0';



   int num1 = atoi(numStr1);
   int num2= atoi(numStr2);
   int result = 0;

   switch (opearator) {
   case '+':
      result = num1 + num2;
   case '-':
      result = num1 - num2;
   case '*':
      result = num1 * num2;
   case '/':
      if (num2 > 0) result =num1 / num2;
      else
      {
         printf("Error");
         return 1;

      }
      break;
   default:
      printf("Error: invaid operator.Use +,-,*,/. \n");
      return 1;



   }
   printf("Result: %d %c %d= %d\n", num1, opearator, num2, result);

   return 0;

}