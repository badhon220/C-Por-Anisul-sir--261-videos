#include <stdio.h>

int main() {
int n,i,tem,rem,sum=0;
printf("enter number");
scanf("%d",&n);
tem=n;
while(tem!=0){
    rem= tem%10;
    sum= sum+rem*rem*rem;
    tem=tem/10;
}
if(sum== n){
    printf("Armstrong");
}
else
printf("not Armstrong");
    return 0;
}