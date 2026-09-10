#include <stdio.h>

int main() {
int num,tem,rem,sum=0;
printf("Enter any number");
scanf("%d",&num);
tem = num;
while(tem !=0){
    rem = tem%10;
    sum = sum*10+rem;
    tem = tem/10;
}
printf("Rverse%d",sum);

    return 0;
}