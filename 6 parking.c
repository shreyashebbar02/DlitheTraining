// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
int main() {
    int r,c,pmax=0,row,i,j,n,max;
    scanf("%d",&r);
    scanf("%d",&c);
    pmax=0;
    for(i=1;i<=r;i++){
        max=0;
        for(j=1;j<=c;j++){
            scanf("%d",&n);
            if(n==1){
                max+=1;
            }
        }
        if(max>pmax){
                pmax=max;
                row=i;
        }
    }
    printf("%d",max);
}