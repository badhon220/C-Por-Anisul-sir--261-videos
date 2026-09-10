#include <stdio.h>

int main() {
int number , count=0,sum=0,total = 0;
for(number=1;number<=100;number++){
    count = 0;
    if(number==1 || number ==0) 
    count=1;
    else 
    for(int i=2; i<number;i++){
        if(number%i == 0)
        {
            count =1;
            break;
        }
    }

if(count == 0) {
printf("%d\n",number);
sum= sum+number;
total++;}
}
printf("The sum of prime number is %d",sum);
printf("Total is %d",total);


    return 0;
}