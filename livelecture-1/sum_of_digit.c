#include <stdio.h>

int main() {
int n,i,tem,rem,sum=0;
printf("enter number");
scanf("%d",&n);
tem=n;
while(tem!=0){
    rem= tem%10;
    sum= sum+rem;
    tem=tem/10;
}
printf("Sum=%d",sum);
    return 0;
}