#include <stdio.h>

int main() {
int n,row,cul;
printf("Enter number");
scanf("%d",&n);
for(row=1;row<=n;row++){
    for(cul=1;cul<=n;cul++){
        if( cul==1||row==n||row==cul){
            printf("*");
        }
        else
        printf(" ");
    }
    printf("\n");
}
    return 0;
}