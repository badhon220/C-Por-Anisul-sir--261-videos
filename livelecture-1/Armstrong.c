#include <stdio.h>

int main() {
int num,rem=0,sum=0,tem;
printf("Enter Number");
scanf("%d",&num);
tem = num;
while(tem != 0){
    rem = tem%10;
    sum = rem*rem*rem+sum;
    tem = tem/10;
}
printf("%d",sum);
if(num == sum)
printf("\n Armstrong Number");
else
printf("not Armstrong");
    return 0;
}