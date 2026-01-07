#include<stdio.h>
int main (){
    int i=9999;
    while(i>1000){
        if(i%9==0&&(i%7==0)){
            break;
        }
        i--;
    }
    printf("largest 4 digit number divisible by 7 and 9 is %d",i);
}