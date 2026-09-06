#include <stdio.h>

int main() {

    printf("Temerature Conversion\n");
    printf("1. Fahrenhit to Celcious\n");
    printf("2. Celcious to Fahrenhight\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1 :
    {
        float fha,cel;
         printf("Enter the temperature in Fahrenhight: ");
        scanf("%f",&fha);
        cel = (fha-32)*5/9;
        printf("Temperature in Celcious: %.2f",cel);
        break;
    }
    case 2 :
     {
        float cel, fha;
        printf("Enter the temperature in Celcious: ");
        scanf("%f",&cel);
        fha = (cel*9/5)+32;
        printf("Temperature in Fahrenhight: %.2f",fha);
        break;
     }
     default :
     printf("Invalid choice");

    }
    return 0;
}