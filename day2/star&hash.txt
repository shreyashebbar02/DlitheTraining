// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    char s[20],no_hash=0,no_star=0,len,i;
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++){ //i!='/0';i++
        if(s[i]=='#')
            no_hash+=1;
        else
            no_star+=1;
    }
    if(no_star>no_hash){
        printf("positive integer");
    }
    else if(no_star<no_hash){
        printf("negative integer");
    }
    else{
        printf("0");
    }
    return 0;
}
