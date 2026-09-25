#include <stdio.h>

int main() {
int n,count=0,i,j;
printf("Enter num");
scanf("%d",&n);
for( i=2;i<=n;i++){
     count=0;
     for(j=2;j<i;j++){
        if(i%j==0){
            count=2;
            break;
        }
        }
        if(count==0){
            printf("%d\n",i);
     }
}
    return 0;
}