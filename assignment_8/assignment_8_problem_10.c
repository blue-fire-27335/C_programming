#include<stdio.h>
int disp_2digit_even_sum6(){
    int num=2,i,count=0,flag=0;
       while(num<10){
        i=2;
        flag=0;
        while(i<10){
            if((num%i==0)&&(i!=num)){
                flag=1;
                break;}
        i++;
        }
        if(flag==0){
        count++;}   
        num++;
        }
        return count;
    }
    void main(){
        printf("count=%d",disp_2digit_even_sum6());
    }