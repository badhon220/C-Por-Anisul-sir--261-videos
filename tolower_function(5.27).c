#include <stdio.h>
#include <ctype.h>

int main() {
 char lower, upper;
 printf("enter your uppercase letter:");
 scanf("%c", &upper);
 lower = tolower(upper);
 printf("the lowercase lettet is%c", lower);
    return 0;
}