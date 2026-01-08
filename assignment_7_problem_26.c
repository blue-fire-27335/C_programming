#include<stdio.h>
int disp_biggest_4digit_div7_9(){
    int i=9999;
    while(i>1000){
        if(i%9==0&&(i%7==0)){
            break;
        }
        i--;
    }
    printf("largest 4 digit number divisible by 7 and 9 is %d",i);
}
void main(){
    disp_biggest_4digit_div7_9();
}
