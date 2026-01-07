#include<stdio.h>
int main(){
    int num,i,o_num;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    i=0;
    while(num>0){
        num/=10;
        i++;
    }
    printf("no of digits in %d=%d",o_num,i);
    return 0;
}