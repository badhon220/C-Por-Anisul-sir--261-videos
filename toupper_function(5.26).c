#include <stdio.h>
#include <ctype.h>
int main() {
char lower, upper;
printf("Enter lower case letter :");
scanf("%c",&lower);
upper = toupper(lower);
printf("The uppercase letter is %c",upper);

    return 0;
}