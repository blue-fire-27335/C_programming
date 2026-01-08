#include<stdio.h>
int count_total_digits(){
     int num,i,o_num;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    i=0;
    while(num>0){
        num/=10;
        i++;
    }
    return i;
}
void main(){
    printf("total digits=%d",count_total_digits());
}