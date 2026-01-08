#include<stdio.h>
int disp_2digit_even_sum6(){
    int i=10;
    while(i<=100){
        if((i%2==0)&&(i%10)+(i/10)==6)printf("%d\n",i);
        i++;
    }
}
int main(){
    disp_2digit_even_sum6();
    return 0;
}