#include<stdio.h>
int disp_sum(){
    int i=1,sum=0;
    while(i<=5){
        sum=sum+i;
        i++;
    }
    return sum;
}
void main(){
    int sum;
    printf("sum=%d",disp_sum());
}