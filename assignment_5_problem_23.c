#include<stdio.h>
int main(){
    int num,i,o_num,count=0,j;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    for(i=0;num>0;i++){
        for(j=0;j<10;j++){
            if((num%10)==j*j) count++;
        }
        num/=10;
    }
    printf("no of perfect square numbers in %d=%d",o_num,count);
    return 0;
}