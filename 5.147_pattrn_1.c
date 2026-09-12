#include <stdio.h>

int main() {
int n, row,cul;
printf("Enter");
scanf("%d",&n);
for(row = n; row>=1;row--){
    for( cul=1; cul<=row;cul++){
        printf("%d",cul);
    }
    printf("\n");
}
    return 0;
}