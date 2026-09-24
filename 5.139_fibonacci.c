#include <stdio.h>

int main() {
int n,i,a=0,b=1,fibo;
printf("Enter lasr num");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("%d ",a);
fibo= a+b;
a=b;
b=fibo;
}
    return 0;
}
