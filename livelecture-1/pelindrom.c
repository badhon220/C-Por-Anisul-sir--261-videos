#include <stdio.h>

int main() {
int n,i,tem,rem,sum=0;
printf("enter number");
scanf("%d",&n);
tem=n;
while(tem!=0){
    rem= tem%10;
    sum= sum*10+rem;
    tem=tem/10;
}
if(sum== n){
    printf("pelindrom");
}
else
printf("not pelindrom");
    return 0;
}