#include<stdio.h>
int disp_rsum(){
    int i=6,sum=0;
    while(i>0){
        sum=sum+i;
        i--;
    }
    return sum;
}
void main(){
    printf("rsum=%d",disp_rsum());
}