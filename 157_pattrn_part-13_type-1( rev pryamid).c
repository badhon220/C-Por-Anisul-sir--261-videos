#include <stdio.h>

int main() {
int n, cul,row;
printf("enter ");
scanf("%d",&n);
for(row =n; row>=1; row--){
    for(cul=1;cul<=n-row;cul++){
        printf(" ");
    }
    for( cul=1;cul<=2*row-1;cul++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}