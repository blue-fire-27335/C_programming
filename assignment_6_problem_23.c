#include<stdio.h>
int main(){
    int num,i=0,o_num,count=0,j;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    while(num>0){
        j=0;
        while(j<10){
            if((num%10)==j*j) count++;
            j++;
        }
        num/=10;
        i++;
    }
    printf("no of perfect square numbers in %d=%d",o_num,count);
    return 0;
}