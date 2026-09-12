#include <stdio.h>

int main() {
int n,sum=1;
printf("Enter Number");
scanf("%d",&n);
for(int i =1; i<=n;i+=2){
 sum = sum *(i*i*i);
}
printf("result=%d",sum);
    return 0;
}