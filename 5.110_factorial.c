#include <stdio.h>

int main() {
int fac =1, i,n;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fac = fac*i;
}
printf("%d factorial is %d ",n,fac);
    return 0;
}