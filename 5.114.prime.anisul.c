#include <stdio.h>

int main() {
int i,n,count=0;
printf("Enter any Number: ");
scanf("%d",&n);
if(n==0 || n==1)
count=1; 
for(i=2;i<n;i++){
    if(n%i==0)
    count=1;
}
if(count==0)
printf("the number is prime number");
else
printf("the number is not prime number");
    return 0;
}