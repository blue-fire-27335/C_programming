#include<stdio.h>
int disp_single_digit_square(){
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
    return count;
}
void main(){
    printf("no of single digit squares=%d",disp_single_digit_square());
}