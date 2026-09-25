#include <stdio.h>

int main() {
int n,row, cul;
printf("enter");
scanf("%d",&n);
for(row=1;row<=n;row++){
    for(cul=1;cul<=n-row; cul++){
        printf(" ");
    }
    for(cul=1;cul<=row;cul++){
        printf("* ");
    }
    printf("\n");    
}
for( row=n-1;row>=1;row--){
    for(cul=1;cul<=n-row;cul++){
        printf(" ");
    }
    for(cul=1;cul<=row;cul++){
        printf("* ");
    }
    printf("\n");
}
    return 0;
}