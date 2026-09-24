#include <stdio.h>

int main() {
int a,cul,row;
printf("Enter Number");
scanf("%d",&a);
for(row =a; row>=1;row--){
 for(cul=1;cul<=row;cul++)
 {
    printf("#");
 }
 printf("\n");
}
    return 0;
}