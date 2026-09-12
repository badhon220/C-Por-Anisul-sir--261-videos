#include <stdio.h>
int main() {
int n,sum=0,odd_sum=0,even_sum=0;
printf("Enter last term:");
scanf("%d",&n);
for(int i =1; i<=n;i++){
 if(i%2==0){
    even_sum= even_sum+i;
 }
 else{
 odd_sum = odd_sum+i;
}
}

sum = odd_sum-even_sum ;
printf("sum=%d",sum);

    return 0;
}
