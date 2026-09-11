#include <stdio.h>

int main() {
int num,tem,rem=0,rev=0;
printf("Enter number");
scanf("%d",&num);
tem = num;
while(tem!=0){
    rem=  tem%10;
    rev = rev*10 +rem;
    tem = tem/10;
}
printf("Reverse is %d\n",rev);
if(rev == num)
printf("Pelindrom number");
else 
printf("Not pelindrom");

    return 0;
}