#include <stdio.h>

int main() {
int n,sum=1;
printf("Enter Number");
scanf("%d",&n);
for(int i =1; i<=n;i=i+2){
 sum = sum *i;
}
printf("sum of odd=%d",sum);
    return 0;
}