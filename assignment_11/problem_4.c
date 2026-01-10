#include<stdio.h>
int find_2digit_odd_sum7(int *i){
    printf("%d\n",*i);
    }
void main(){
     int i=10;
    while(i<=100){
        if((i%2==1)&&(i%10)+(i/10)==7) find_2digit_odd_sum7(&i);
        i++;
    }
}