#include <stdio.h>

int main() {
int n1,n2,sum=0,b=2,a=1;
printf("Enter n1,n2");
scanf("%d %d",&n1,&n2);
for(;a<=n1 && b<=n2;){
printf("%d*%d+",a,b);
a+=1;
b+=1;
sum=sum+a*b;
}
printf("sum =%d",sum);

    return 0;
}