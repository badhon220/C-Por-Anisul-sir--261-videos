#include <stdio.h>

int main() {
int n,sum=0;
printf("Enter number");
scanf("%d",&n);
for(int i= 1; i<=n;i++){
sum=sum+i;
}
printf("1+2+.....+%d=%d",n,sum);
    return 0;
}