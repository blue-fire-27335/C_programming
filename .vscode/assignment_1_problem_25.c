#include<stdio.h>
int main(){
    int num,sum;
    printf("enter a 3 digit no\n");
    scanf("%d",&num);
    st1: sum=(num%10)+((num/10)%10)+(num/100);
    if(sum>=10){
        num=sum;
        goto st1;
    }
    printf("result=%d",sum);
    return 0;
}