// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    int i,j,num[100],sum=0;
    char c[100];
    scanf("%s",c);
    for(i=0;i<strlen(c);i++){ 
         scanf("%d",&num[i]);
    }
    for(i=0;i<strlen(c);i++){
        sum=sum+num[i];
    }
    for(i=0;i<strlen(c);i++){
        c[i]=c[i]+sum;
        sum=sum-num[i];
        if(c[i]>122){
            c[i]=c[i]%123+97;
          }
    }
    printf("%s",c);
}