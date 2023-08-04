#include <stdio.h>

int main() {
    // Write C code here
    int num,i,flag=0;
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            flag=1;
            printf("%d is not prime",num);
            break;
        }
    }
    if(flag==0){
        printf("%d is prime",num);
    }
    return 0;
}