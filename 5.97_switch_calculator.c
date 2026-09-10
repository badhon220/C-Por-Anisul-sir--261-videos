#include <stdio.h>

int main() {
double num1 , num2;
char op;
printf("Enter Two number");
scanf("%lf",&num1);
scanf("%lf",&num2);
printf("Enter the operator (+,-,*,/)");
scanf(" %c",&op);
switch(op) {
    case '+' : {printf("Sum = %lf", num1+num2);}

    case '-' : {printf("Difference = %lf", num1-num2);}
    case '*' : {printf("Product = %lf", num1*num2);}
    case '/' : {printf("Quotient = %lf", num1/num2);}
    default : { printf("Invalid operator");}
}


    return 0;
}