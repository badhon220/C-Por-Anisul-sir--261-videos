#include <stdio.h>

int main() {
float n,sum=0;
printf("Enter n =");
scanf("%f",&n);
for(float i =1; i<=n;i++){
 sum = sum + 1/i;
 if(i==1){
    printf("%.f ",i);
 }
 else
 printf("+(1/%.f) ",i);
 
}
printf("\nsum =%f",sum);
    return 0;
}