#include <stdio.h>

int main() {
int num,sum=0,tem,rem,fac;
printf("Enter number");
scanf("%d",&num);
tem = num;
while(tem !=0){
    fac=1;
    rem = tem%10;
      for(int i=1;i<=rem;i++){
        fac = fac*i;
      }
      sum = sum+fac;

    tem = tem/10;
}
if(sum == num)
printf("%d is strong num",num);
else
printf("Not strong");
    return 0;
}