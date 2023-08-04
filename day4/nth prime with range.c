#include <stdio.h>

int main(){
    int n,prime,count=0,i,flag=0,sr,er;
    scanf("%d",&sr);
    scanf("%d",&er);
    scanf("%d",&n);
    prime=sr;
    while(count!=er){
        flag=0;
        for(i=2;i<=prime/2;i++){
        if(prime%i==0){
            flag=1;
        }
        }
        prime++;
        if(flag==0){
            count++;
            if(count==n){
                break;
            }
    }
    }
    printf("%d",prime-1);
    return 0;
}