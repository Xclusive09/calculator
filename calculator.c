#include <stdio.h>
/** main - cretae a simple calculator
*
*Return: Always 0 (success)
*/

int main(void)
{
     char operator;
     double first, second;
     printf("Enter the operator (+, -, *, /): ");
     scanf("%c", &operator);

     printf("Enter the two numbers one by one :");
     scanf("%.2lf %.2lf", &first,&second);

     switch (operator)
     {
     case '+' :
            printf("%.2lf + %.2lf = %.2lf", first, second,(first+second));
        break;
     case '-' :
            printf("%.2lf - %.2lf = %.2lf", first, second,(first-second));
        break;
     case '*' :
            printf("%.2lf * %.2lf = %.2lf", first, second,(first*second));
        break;
     case '/' :
        if (second != 0.0)
            printf("%.2lf / %.2lf = %.2lf", first, second,(first/second));
        else 
         printf("Please insert a valid number.");
        break; 

     default:
    printf("Invalid Operator!!!");
     }
}
