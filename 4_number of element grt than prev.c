// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,ref=0,i,count=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num>ref){
            count++;
            ref=num;
        }
    }
    printf("%d",count);
}