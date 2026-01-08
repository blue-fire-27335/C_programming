#include<stdio.h>
int disp_total_2digit_odd(){
     int num,i=0,o_num,count=0;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    while(num>0){
        if((num%100)%2==1&&(num%100>9)){
            printf("%d\n",num%100);
            count++;}
        num/=10;
        i++;
    }
    return count;
}
void main(){
    printf("no of 2 digit odd=%d",disp_total_2digit_odd());
}