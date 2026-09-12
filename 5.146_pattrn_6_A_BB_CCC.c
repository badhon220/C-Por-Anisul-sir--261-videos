#include <stdio.h>
int main() {
int n,row,cul;
printf("Enter N");
scanf("%d",&n);
for( row =1;row<=n;row++){
    for(cul=1;cul<=row;cul++){
        printf("%c",row+64);
    }
    printf("\n");
}
    return 0;
}
