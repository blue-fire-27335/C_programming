#include<stdio.h>
int main(){
    int num,i,o_num;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    for(i=0;num>0;i++){
        num/=10;
    }
    printf("no of digits in %d=%d",o_num,i);
    return 0;
}