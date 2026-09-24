#include <stdio.h>

int main() {
int n,row,cul,space;
printf("Enter number ");
scanf("%d",&n);
for(row=1; row<=n;row++){
    for(cul=1;cul<=n-row;cul++){
    printf(" ");}
     for(cul=1;cul<=row;cul++){
    printf("%d",cul);}
    printf("\n");

}

    return 0;
}