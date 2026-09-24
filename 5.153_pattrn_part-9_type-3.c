#include <stdio.h>

int main() {
int n,cul,row;
printf("Enter Number");
scanf("%d",&n);
for(row=1; row<=n;row++){
    for(cul=1;cul<=n-row; cul++){
        printf(" ");
    }
    for(cul=1;cul<=row; cul++){
        printf("%c",cul+64);
    }
    printf("\n");
}
for(row=n-1; row>=1;row--){
    for(cul=1;cul<=n-row; cul++){
        printf(" ");
    }
    for(cul=1;cul<=row; cul++){
        printf("%c",cul+64);
    }
    printf("\n");
}
    return 0;
}
