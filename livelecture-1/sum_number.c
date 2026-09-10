#include <stdio.h>

int main() {
int number , sum=0 ,tem,rem;
printf("Enter any number");
scanf("%d",&number);
tem= number;
while(tem!=0){
    rem = tem %10;
    sum = sum +rem;
    tem = tem/10;
}

printf("%d",sum);


    return 0;
}