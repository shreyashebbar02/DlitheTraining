#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int s1[1000000],s2[1000000],top1=-1,top2=-1;

void push1(long int item){
    top1=top1+1;
    s1[top1]=item;
    
}
void push2(long int item){
    top2=top2+1;
    s2[top2]=item;
}

void pop1(){
    long int item;
    while(top1!=0){
        item=s1[top1];
        push2(item);
        top1=top1-1;
    }
    top1=top1-1;
}

void pop2(){
    while(top2!=-1){
        push1(s2[top2]);
        top2=top2-1;
    }
    
}


void enqueue(long int item){
    push1(item);
}
void dequeue(){
    pop1();
    pop2();
}
int display(){
    return(s1[0]);
    
}

int main() {

    long int item,num,x,i;
    int op;
    scanf("%li",&num);
    for(i=0;i<num;i++){
        scanf("%d",&op);
        if(op==1){
            scanf("%li",&item);
            enqueue(item);
        }else if(op==2){
            dequeue();
        }else if(op==3){
            x=display();
            printf("%li\n",x);
        }else{
            break;
        }
    }
    
    
      
    return 0;
}
