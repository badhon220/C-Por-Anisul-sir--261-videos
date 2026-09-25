#include <stdio.h>

int main() {
int n,row,cul;
printf("enter");
scanf("%d",&n);
for(row=1;row<=n;row++){
    for(cul=1; cul<=n;cul++){
        printf("%d",row);
    }
    printf("\n");
}
    return 0;
}