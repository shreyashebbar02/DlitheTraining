// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
int main() {
    int num,min=INT_MAX,max=INT_MIN,i,count=0;
    for(i=0;i<10;i++){
        scanf("%d",&num);
        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
    }
    printf("min=%d max=%d",min,max);
}