#include<stdio.h>
int main(){
    int num,o_num,sum=0;
    printf("enter a number\n");
    scanf("%d",&num);
    o_num=num;
    st1:if(num>0){
        sum=sum+num%10;
        num/=10;
        goto st1;
    }
    printf("sum of digits in %d=%d",o_num,sum);
    return 0;
}