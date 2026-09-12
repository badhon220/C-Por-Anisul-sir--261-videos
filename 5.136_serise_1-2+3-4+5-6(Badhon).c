#include <stdio.h>

int main() {
int n,sum=0,odd_sum=0,even_sum=0;
printf("Enter last term:");
scanf("%d",&n);
for(int i =1; i<=n;i+=2){
 odd_sum = odd_sum+i ;
}
for(int i =2; i<=n;i+=2){
 even_sum = even_sum+i ;
}
sum = odd_sum-even_sum;

printf("result=%d",sum);
    return 0;
}