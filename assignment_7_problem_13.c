#include<stdio.h>
int disp_reverse_number(){
    int num,o_num,rev=0,rem;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("reverse of %d=%d",o_num,rev);
}
void main(){
    disp_reverse_number();
}