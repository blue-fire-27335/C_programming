#include<stdio.h>
int disp_count_sum14(){
    int i,j,count=0,sum=0;
    for(i=0;i<100000;i++){
        j=i;
        sum=0;
        while(j>0){
            sum=sum+(j%10);
            j/=10;
        }
        if(sum==14) count++;
    }
    printf("total count=%d",count);
}
void main(){
    disp_count_sum14();
}