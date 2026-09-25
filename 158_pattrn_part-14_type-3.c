#include <stdio.h>

int main() {
 int n,cul,row;
 printf( "Enter");
 scanf("%d",&n);
 for(row=1;row<=n;row++){
 for(cul=1;cul<=n-row;cul++){
    printf(" ");
 }
 for(cul=1;cul<=2*row-1;cul++){
    printf("%d",cul);
 }
 printf("\n");
 }
 
for(row =n-1; row>=1; row--){
    for(cul=1;cul<=n-row;cul++){
        printf(" ");
    }
    for( cul=1;cul<=2*row-1;cul++){
        printf("%d",cul);
    }
    printf("\n");
}
    return 0;
}