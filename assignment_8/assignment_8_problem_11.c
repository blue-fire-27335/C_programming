#include<stdio.h>
int disp_total_odd_digits(){
    int num,i,o_num,count=0;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    for(i=0;num>0;i++){
        if((num%10)%2==1)count++;
        num/=10;
    }
    return count;
}
void main(){
    printf("no of odd digits=%d",disp_total_odd_digits());
}