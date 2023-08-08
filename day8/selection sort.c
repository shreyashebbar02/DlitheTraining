// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main() {
    int i,n,j,pos,a[100],min,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        min=a[i];
        for(j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                pos=j;
            }
        }
        if(pos!=i){
            temp=a[pos];
            a[pos]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}