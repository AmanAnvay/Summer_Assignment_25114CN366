#include <stdio.h>

int main(){
    int n ,count=0;
    printf("Enter Number =>");
    scanf("%d",&n);

    int i=1;
    while(n!=0){
         n/=10;
        count+=i;
       
    }
    printf("Digit of given number is %d ",count);
    return 0;
}