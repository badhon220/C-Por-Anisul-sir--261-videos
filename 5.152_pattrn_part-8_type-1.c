#include <stdio.h>

int main() {
int n,cul,row;
printf("Enter Number");
scanf("%d",&n);
for(row= n;row>=1;row--){
    for(cul=1;cul<=n-row;cul++){
        printf(" ");
    }
     for(cul=1;cul<=row;cul++){
        printf("%d",cul);
    }
    printf("\n");

}
    return 0;
}