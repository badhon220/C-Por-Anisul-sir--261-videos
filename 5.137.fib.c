#include <stdio.h>

int main() {
int n,i,a=0,b=1,fibo;
printf("Enter last");
scanf("%d",&n);
while(i<n){
    printf("%d ",a);
    fibo= a+b;
    a=b;
    b=fibo;
    i++;
}
    return 0;
}