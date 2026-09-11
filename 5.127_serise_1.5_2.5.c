#include <stdio.h>

int main() {
float i,sum=0, n;
printf("Ente number");
scanf("%f",&n);
for(i= 1.5; i<=n; i++)
{
    sum= sum+i;
}
printf("Sum = %.1f",sum);


    return 0;
}