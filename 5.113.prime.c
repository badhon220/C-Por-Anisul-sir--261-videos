#include <stdio.h>

int main() {
int n,i;
printf("Enter number ");
scanf("%d",&n);
for(i=2;i<n;i++){
    if(n%i==0){
        printf("Not prime");
        break;
    }
    printf("Prime");
    break;
}
    return 0;
}