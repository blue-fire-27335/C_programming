#include<stdio.h>
int disp_2digit_odd_below20(){
    int i=10;
    while(i<20){
        if(i%2==1)printf("%d\n",i);
        i++;
    }
}
int main(){
    disp_2digit_odd_below20();
    return 0;
}