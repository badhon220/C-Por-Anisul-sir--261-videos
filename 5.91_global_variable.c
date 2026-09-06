#include<stdio.h>
int a=10; //Here a is a global variable
int main()
{
    printf("Inside the main function a = %d\n",a);
    display();
}

void display()
{
    printf("Inside the display function a = %d\n",a);
}
