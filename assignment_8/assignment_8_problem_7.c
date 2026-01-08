#include<stdio.h>
int disp_reverse_number(int num){
    int rev=0,rem;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    return rev;
}
void main(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("reverse of the number=%d",disp_reverse_number(num));
}