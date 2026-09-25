#include <stdio.h>

int main() {
int n, row, cul,count=0;
printf("enter ");
scanf("%d",&n);
for(row=1;row<=n;row++){
    for(cul=1;cul<=row;cul++){
count++;
printf("%d ",count);
    }
    printf("\n");
}
    return 0;
}