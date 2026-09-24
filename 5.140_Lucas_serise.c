#include <stdio.h>

int main() {
int i,a=2,b=1,n,luco;
printf("Enter number ");
scanf("%d",&n);
for(i =1;i<=n;i++){
    printf("%d  ",a);
 luco = a+b;
 a=b;
 b=luco;
}

    return 0;
}