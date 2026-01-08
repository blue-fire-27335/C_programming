#include<stdio.h>
int disp_2digit_ones5(){
    int i=10,sum=0;
    while(i<=100){
        if((i%10)==5)sum=sum+i;
        i++;
    }
    return sum;
}
void main(){
    printf("sum=%d",disp_2digit_ones5());
}