#include<stdio.h>
int disp_2digit_odd_sum7(){
    int i=10;
    while(i<=100){
        if((i%2==1)&&(i%10)+(i/10)==7)printf("%d\n",i);
        i++;
    }
}
int main(){
    disp_2digit_odd_sum7();
    return 0;
}