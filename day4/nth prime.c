#include <stdio.h>

int main(){
    int n,prime=2,count=1,i,flag=0;
    scanf("%d",&n);
    while(count!=n){
        flag=0;
        prime++;
        for(i=2;i<=prime/2;i++){
        if(prime%i==0){
            flag=1;
        }
        }
        if(flag==0){
            count++;
    }
    }
    printf("%d",prime);
    return 0;
}