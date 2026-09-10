#include <stdio.h>

int main() {
int num1, num2, large;
printf("Enter two number");
scanf("%d %d",&num1,&num2);
large = (num1>num2) ? num1 : num2;
printf("Large num is %d",large);

    return 0;
}