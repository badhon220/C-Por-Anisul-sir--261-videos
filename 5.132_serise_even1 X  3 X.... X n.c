#include <stdio.h>

int main() {
int n,sum=1;
printf("Enter Number");
scanf("%d",&n);
for(int i =2; i<=n;i=i+2){
 sum = sum *i;
}
printf("sum =%d",sum);
    return 0;
}