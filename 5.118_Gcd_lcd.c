#include <stdio.h>

int main() {
int num1,num2,rem,gcd,Lcm;
int n1,n2;
printf("Enter Two number");
scanf("%d %d",&num1,&num2);
n1=num1;
n2=num2;
while(n2!=0){
    rem= n1%n2;
    n1=n2;
    n2=rem;
}
  gcd= n1;
  Lcm=(num1*num2)/gcd;
  printf("Gcd is %d\n Lcm is %d",gcd,Lcm);
    return 0;
}